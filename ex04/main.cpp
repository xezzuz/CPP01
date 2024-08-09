/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 18:32:06 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/08 16:32:14 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

bool			emptyCheck(std::string filename, std::string s1) {
	if (filename.empty() || s1.empty()) {
		std::cout << "<infile> <s1> cannot be empty\n";
		return true;
	}
	return false;
}

std::string		replaceOccurence(std::string str, std::string s1, std::string s2) {
	std::string			result;
	size_t				occ_pos = 0;
	size_t				start_pos = 0;

	while ((occ_pos = str.find(s1, start_pos)) != std::string::npos) {
		result += str.substr(start_pos, occ_pos - start_pos);
		result += s2;
		start_pos = occ_pos + s1.length();
	}
	result += str.substr(start_pos);
	return result;
}

int				main(int argc, char **argv) {
	std::ifstream		infile;
	std::ofstream		outfile;
	std::string			filename;
	std::string			line;
	std::string			buffer;

	if (argc != 4 || emptyCheck(argv[1], argv[2])) {
		std::cout << "Usage: <infile> <s1> <s2>\n";
		return 1;
	}
	filename = argv[1];
	infile.open(argv[1], std::ios::in);
	if (!infile.is_open()) {
		std::cerr << "Error: cannot open <" << argv[1] << ">\n";
		return 1;
	}
	outfile.open(filename + ".replace", std::ios::out);
	if (!outfile.is_open()) {
		std::cerr << "Error: cannot open <" << argv[1] << ".replace>\n";
		infile.close();
		return 1;
	}
	while (std::getline(infile, line)) {
		buffer += line;
		if (!infile.eof()) {
			buffer += "\n";
		}
	}
	outfile << replaceOccurence(buffer, argv[2], argv[3]);
	infile.close();
	outfile.close();
	return 0;
}

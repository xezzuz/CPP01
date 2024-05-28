/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 11:16:50 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/19 12:23:37 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Usage: ./harlFilter <level>\n";
		return 1;
	}

	Harl		Karen;

	Karen.complain(argv[1]);
}

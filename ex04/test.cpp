/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:30:12 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/16 16:32:33 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

bool	emptyCheck(std::string str) {
	if (str.empty()) {
		std::cout << "String is empty\n";
		return false;
	}
	std::cout << "String is not empty\n";
	return true;
}

int main(void) {
	std::string		s1 = "              ";
	emptyCheck(s1);
}

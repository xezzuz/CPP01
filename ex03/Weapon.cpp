/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:24:54 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/12 15:55:20 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
	std::cout << "Weapon::Created\n";
}

Weapon::Weapon(std::string type) {
	this->type = type;
	std::cout << "Weapon::Created\n";
}

Weapon::~Weapon() {
	std::cout << "Weapon::Destroyed\n";
}

std::string&	Weapon::getType(void) {
	std::string&		result = type;
	return result;
}

void			Weapon::setType(std::string _type) {
	type = _type;
}

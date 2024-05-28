/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:42:03 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/12 17:29:50 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() {
	std::cout << "HumanB::Created\n";
	
}

HumanB::HumanB(std::string name) {
	this->name = name;
	this->weaponPtr = nullptr;
	std::cout << "HumanA:::Created\n";
}

HumanB::~HumanB() {
	std::cout << "HumanB::Destroyed\n";
	
}

void		HumanB::setWeapon(Weapon& weapon) {
	weaponPtr = &weapon;
}

void		HumanB::attack(void) {
	// if waeponPtr == nullptr
	std::cout << name << "attacks with their " << weaponPtr->getType() << std::endl;
}

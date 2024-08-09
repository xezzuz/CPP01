/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:42:03 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/07 13:56:14 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() {
	weaponPtr = NULL;
}

HumanB::HumanB(std::string name) {
	this->name = name;
	this->weaponPtr = NULL;
}

HumanB::~HumanB() {

}

void		HumanB::setWeapon(Weapon& weapon) {
	weaponPtr = &weapon;
}

void		HumanB::attack(void) const {
	if (weaponPtr != NULL) {
		std::cout << name << " attacks with their " << weaponPtr->getType() << std::endl;	
	}
}

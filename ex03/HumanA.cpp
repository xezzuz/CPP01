/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:38:11 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/07 13:55:44 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon) {
	this->name = name;
}

HumanA::~HumanA() {

}

void		HumanA::attack(void) const {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

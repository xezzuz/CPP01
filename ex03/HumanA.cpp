/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:38:11 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/12 17:10:07 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// HumanA::HumanA() {
// 	std::cout << "HumanA::Created\n";
// }

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon) {
	this->name = name;
	std::cout << "HumanA:::Created\n";
}

HumanA::~HumanA() {
	std::cout << "HumanA::Destroyed\n";
}

void		HumanA::attack(void) {
	std::cout << name << "attacks with their " << weapon.getType() << std::endl;
}

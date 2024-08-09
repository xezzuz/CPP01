/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:24:54 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/07 13:56:35 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {

}

Weapon::Weapon(std::string type) {
	this->type = type;

}

Weapon::~Weapon() {

}

const std::string&		Weapon::getType(void) const {
	const std::string&		constResult = type;

	return constResult;
}

void			Weapon::setType(std::string _type) {
	type = _type;
}

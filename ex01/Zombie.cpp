/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 10:11:16 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/12 11:25:59 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	// std::cout << "default constructor called\n";
}

Zombie::Zombie(std::string name) {
	this->name = name;
	// std::cout << name << "::created\n";
}

Zombie::~Zombie() {
	// std::cout << this->name << "::destroyed\n";
}

void	Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

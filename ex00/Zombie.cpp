/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 10:11:16 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/12 10:44:57 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	// std::cout << "default constructor called\n";
}

Zombie::Zombie(std::string name) {
	this->name = name;
	// std::cout << "second constructor called, created a Zombie::" << name << "\n";
}

Zombie::~Zombie() {
	std::cout << this->name << " default destructor called\n";
}

void	Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

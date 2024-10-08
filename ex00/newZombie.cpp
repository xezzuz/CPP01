/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 10:48:28 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/07 13:37:48 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie		*newZombie(std::string name) {
	Zombie		*result = new  (std::nothrow) Zombie(name);
	if (!result)
		std::cout << "Memory Allocation Failed\n";
	return	result;
}

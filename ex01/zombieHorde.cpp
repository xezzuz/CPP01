/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 11:26:30 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/07 13:51:22 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie		*zombieHorde(int N, std::string name) {
	Zombie	*zombiesArray;
	int		i;

	if (N <= 0) {
		std::cout << "Number of zombies must be greater than 0\n";
		return NULL;
	}

	zombiesArray = new (std::nothrow) Zombie[N];

	if (!zombiesArray) {
		std::cout << "Memory Allocation Failed\n";
		return NULL;
	}

	i = 0;
	while (i < N)
		zombiesArray[i++] = Zombie(name);

	return zombiesArray;
}

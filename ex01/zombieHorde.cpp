/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 11:26:30 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/12 11:26:47 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie		*zombieHorde(int N, std::string name) {
	Zombie	*zombiesArray;
	int		i;

	zombiesArray = new Zombie[N];

	i = 0;
	while (i < N)
		zombiesArray[i++] = Zombie(name);
	return zombiesArray;
}

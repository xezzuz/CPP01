/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 10:17:29 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/07 13:51:58 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie		*zombiesArray;
	int			zombiesCount = 10;

	zombiesArray = zombieHorde(zombiesCount, "Foo");
	if (!zombiesArray)
		return 1;

	int			i = 0;
	while (i < zombiesCount)
		zombiesArray[i++].announce();
	delete[] zombiesArray;
	return 0;
}

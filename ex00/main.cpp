/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 10:17:29 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/07 13:39:50 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie		firstZombie("Foo");
	Zombie		*AllocatedZombie;

	AllocatedZombie = newZombie("heapFoo");
	if (!AllocatedZombie)
		return 1;

	firstZombie.announce();
	AllocatedZombie->announce();

	randomChump("stackFoo");

	delete AllocatedZombie;
}

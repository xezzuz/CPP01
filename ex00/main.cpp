/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 10:17:29 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/12 15:49:18 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	// Zombie		firstZombie("Foo");
	Zombie		firstZombie = Zombie("Foo");
	Zombie		*ptrToAllocatedZombie;

	ptrToAllocatedZombie = newZombie("heapFoo");

	firstZombie.announce();
	ptrToAllocatedZombie->announce();

	randomChump("stackFoo");

	delete ptrToAllocatedZombie;
}

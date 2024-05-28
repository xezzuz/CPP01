/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 10:17:29 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/12 11:30:52 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// void	ff(void) {
// 	system ("leaks a.out");
// }

int main(void) {
	Zombie	*zombiesArray;
	int		i = 0;

	// atexit(ff);
	zombiesArray = zombieHorde(5, "Foo");
	while (i < 5)
		zombiesArray[i++].announce();
	delete[] zombiesArray;
}

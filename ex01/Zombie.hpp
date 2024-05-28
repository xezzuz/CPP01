/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 10:05:06 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/12 11:27:01 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
	private:
		std::string		name;
	public:
		void			announce(void);
		
		Zombie();
		Zombie(std::string name);
		~Zombie();
};

Zombie		*newZombie(std::string name);
void		randomChump(std::string name);
Zombie		*zombieHorde(int N, std::string name);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:19:58 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/12 15:55:26 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
	private:
		std::string		type;
	public:
		std::string&	getType(void);
		void			setType(std::string _type);

		Weapon();
		Weapon(std::string type);
		~Weapon();
};

#endif

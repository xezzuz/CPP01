/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:19:58 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/07 13:56:27 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
	private:
		std::string		type;
	public:
		const std::string&		getType(void) const;
		void					setType(std::string _type);

		Weapon();
		Weapon(std::string type);
		~Weapon();
};

#endif

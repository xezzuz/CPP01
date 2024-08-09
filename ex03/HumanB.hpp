/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:41:38 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/07 13:56:07 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanB {
	private:
		std::string		name;
		Weapon			*weaponPtr;
	public:
		void			setWeapon(Weapon& weapon);
		void			attack(void) const;

		HumanB();
		HumanB(std::string name);
		~HumanB();
};

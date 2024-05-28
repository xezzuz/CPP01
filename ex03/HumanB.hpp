/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:41:38 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/12 17:02:23 by nazouz           ###   ########.fr       */
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
		void			attack(void);

		HumanB();
		HumanB(std::string name);
		~HumanB();
};

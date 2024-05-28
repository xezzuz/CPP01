/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:31:25 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/12 16:46:03 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanA {
	private:
		std::string		name;
		Weapon&			weapon;
	public:
		void			attack(void);

		HumanA();
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
};

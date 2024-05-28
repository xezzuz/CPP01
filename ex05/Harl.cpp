/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:40:08 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/19 11:47:08 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	std::cout << "Karen is here!\n\n";
}

Harl::~Harl() {
	std::cout << "\nThank god, Karen is gone\n";
}

void		Harl::debug(void) {
	std::cout << "[DEBUG]\t\t\tI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void		Harl::info(void) {
	std::cout << "[INFO]\t\t\tI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void		Harl::warning(void) {
	std::cout << "[WARNING]\t\tI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void		Harl::error(void) {
	std::cout << "[ERROR]\t\t\tThis is unacceptable! I want to speak to the manager now.\n";
}

void		Harl::complain(std::string level) {
	void			(Harl::*funcPtr[4])() = {	&Harl::debug,
												&Harl::info,
												&Harl::warning,
												&Harl::error	};
	std::string		levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int				i = 0;

	while (i < 4) {
		if (level == levels[i]) {
			(this->*funcPtr[i])();
			return ;
		}
		i++;
	}
	std::cout << "[UNKOWN]\tSilence\n";
}

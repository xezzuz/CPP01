/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:33:00 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/19 11:44:59 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl {
	private:
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
	public:
		void		complain(std::string level);

		Harl();
		~Harl();
};

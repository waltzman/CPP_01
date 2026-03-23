/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 09:00:15 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/23 10:46:56 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void (Harl::*Harl::_f[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

std::string Harl::_levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

Harl::Harl() {
	std::cout << "Harl constructed." << std::endl;
}

Harl::~Harl() {
	std::cout << "Harl deleted." << std::endl;
}

void	Harl::_debug() {
	std::cout	<< "DEBUG level:\n"
				<< "I love having extrac bacon for my "
				<< "7XL-double-cheese-triple-pickle-special-ketchup burger.\n"
				<< "I really do!\n";
}

void	Harl::_info(void) {
	std::cout	<< "INFO level:\n"
				<< "I cannot believe adding extra bacon cost more money.\n"
				<< "You didn't put enough bacon in my burger!\n"
				<< "If you did, I wouldn't be asking for more!\n";
}

void	Harl::_warning(void) {
	std::cout	<< "WARNING level:\n"
				<< "I think I deserve to have some extra bacon for free.\n"
				<< "I've been coming for years, whereas you started working here just last month.\n";
}

void	Harl::_error(void) {
	std::cout	<< "ERROR level:\n"
				<< "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level) {
		int	i = 0;
		while (i < 4) {
			if (_levels[i] == level) {
				(this->*_f[i])();
				break ;
			}
			i++;
		}
		if (i == 4)
			std::cout << "Probably complaining about insignificant problems\n";
}




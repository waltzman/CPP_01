/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 11:12:04 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/23 11:56:28 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 09:00:15 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/23 10:50:54 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void (Harl::*Harl::_f[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

std::string Harl::_levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

Harl::Harl() {
	std::cout << std::endl << "Harl constructed.\n" ;
	std::cout << std::endl;
}

Harl::~Harl() {
	std::cout << std::endl << "Harl deleted." << std::endl;
}

void	Harl::_debug(void) {
	std::cout	<< GREEN << "[DEBUG]"  << RESET
				<< " I love having extra bacon for my "
				<< "7XL-double-cheese-triple-pickle-special-ketchup burger.\n"
				<< "I really do!\n"
				<< RESET;
}

void	Harl::_info(void) {
	std::cout	<< BLUE << "[INFO]" << RESET
				<< " I cannot believe adding extra bacon cost more money.\n"
				<< "You didn't put enough bacon in my burger!\n"
				<< "If you did, I wouldn't be asking for more!\n";
}

void	Harl::_warning(void) {
	std::cout	<< YELLOW << "[WARNING]"  << RESET
				<< " I think I deserve to have some extra bacon for free.\n"
				<< "I've been coming for years, whereas you started working here just last month.\n";
}

void	Harl::_error(void) {
	std::cout	<< RED << "[ERROR]" << RESET
				<< " This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::switch_complain(std::string level) {
		int	i = 0;
		while (i < 4) {
			if (_levels[i] == level)
				break;
			i++;
		}
		switch(i)
		{
			case 0:
				(this->*_f[0])();
			case 1:
				(this->*_f[1])();
			case 2:
				(this->*_f[2])();
			case 3:
				(this->*_f[3])();
				break ;
			default:
				std::cout << "[Probably complaining about insignificant problems]\n";
		}
}



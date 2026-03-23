/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 10:58:08 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/23 11:45:40 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2){
		std::cout << RED << " ERROR: Incorrect number of arguments" << RESET << std::endl;
		return (1);
	}
	if (!argv[1][0]) {
		std::cout << RED << "ERROR: empty string not allowed" << RESET << std::endl;
		return (1);
	}

	Harl harl;
	harl.switch_complain(argv[1]);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 08:46:34 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/23 11:01:34 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	std::cout << std::endl;
	Harl harl;
	std::cout << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;\
	harl.complain("");
	std::cout << std::endl;\
	harl.complain("BLAH  BLAH");
	std::cout << std::endl;

	return (0);
}

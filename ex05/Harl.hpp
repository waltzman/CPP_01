/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 09:00:05 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/06 14:05:39 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>



class Harl {

	public:

		Harl(void);
		~Harl(void);
		void	complain(std::string level);

	private:

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		static void (Harl::*_f[4])(void);
		static	std::string _levels[4];
};

#endif

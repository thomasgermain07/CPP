/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 14:30:05 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/12 17:22:08 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <iostream>
#include <time.h>

int			main()
{
	srand(time(NULL)); // setup rand

	NinjaTrap		n1("ninja");
	std::cout << std::endl;
	{
		std::cout << "\t--- SuperTrap creation ---" << std::endl;
		SuperTrap		s1("super");
		s1.ninjaShoebox(n1);
		s1.volthunter_dot_exe(n1.getName());
		std::cout << "\t--- SuperTrap destruction ---" << std::endl;
	}
	std::cout << std::endl;
	return 0;
}

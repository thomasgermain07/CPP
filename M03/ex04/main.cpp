/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 14:30:05 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/15 16:39:16 by thgermai         ###   ########.fr       */
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

	std::cout << std::endl;
	{
		std::cout << "\t--- SuperTrap creation ---" << std::endl;
		SuperTrap		s1("dim");
		s1.takeDamage(32);
		SuperTrap		s2 = s1;
		std::cout << "s2 name = " << s1.getName() << std::endl;
		std::cout << "s2 hp = " << s1.getHp() << std::endl;
		std::cout << "\t--- ScavTrap destruction ---" << std::endl;
	}
	std::cout << std::endl;
	return 0;
}

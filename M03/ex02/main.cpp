/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 14:30:05 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/14 00:31:22 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <time.h>

int			main()
{
	srand(time(NULL)); // setup rand

	ScavTrap s01("Thom");
	ScavTrap s02(s01);
	ScavTrap s03;
	s03 = s02;

	return 0;
}

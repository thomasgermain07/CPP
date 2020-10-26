/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 12:51:07 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/26 02:21:02 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"
#include "HumanA.hpp"

int				main()
{
	{
		Weapon		weapon = Weapon("Knife");
		HumanA		bob("bob", weapon);
		bob.attack();
		weapon.setType("Machine Gun");
		bob.attack();
	}
	std::cout << "\n" << std::endl;
	{
		Weapon		weapon = Weapon("Submachine Gun");
		HumanB		jim("jim");
		jim.setWeapon(weapon);
		jim.attack();
		weapon.setType("Rocket launcher");
		jim.attack();
	}
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 15:12:27 by thgermai          #+#    #+#             */
/*   Updated: 2020/09/22 15:56:47 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB
# define HUMANB

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	public :
		HumanB(std::string _name);
		void			attack();
		void			setWeapon(Weapon &_weapon);
	private :
		std::string		name;
		Weapon			*weapon;
};

#endif

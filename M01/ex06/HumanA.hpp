/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 15:08:29 by thgermai          #+#    #+#             */
/*   Updated: 2020/09/22 15:56:35 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA
# define HUMANA

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
	public :
		HumanA(std::string _name, Weapon &_weapon);
		void			attack();
		void			setWeapon(Weapon &_weapon);
	private :
		std::string		name;
		Weapon			*weapon;
};


#endif

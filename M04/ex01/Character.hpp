/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 15:19:35 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/20 16:41:09 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER
# define CHARACTER

# include <iostream>
# include "Enemy.hpp"
# include "AWeapon.hpp"

class Character
{
	public:
		Character(std::string const &_name);
		Character(Character const &ref);
		Character			&operator=(Character const &ref);
		~Character();
		void				recoverAP();
		void				equip(AWeapon *_weapon);
		void				attack(Enemy *enemy);
		AWeapon				*getWeapon() const;
		std::string			getName() const;
		int					getAp() const;
	private :
		Character();
		std::string			name;
		int					ap;
		AWeapon				*weapon;
};

std::ostream			&operator<<(std::ostream &os, Character const &c);

#endif
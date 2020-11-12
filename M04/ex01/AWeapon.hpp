/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 01:10:07 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/12 16:14:57 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON
# define AWEAPON

# include <iostream>
# include <string.h>

class		AWeapon
{
	public :
		AWeapon(std::string const &_name, int _apCost, int _damage);
		AWeapon(AWeapon const &ref);
		AWeapon				&operator=(AWeapon const &ref);
		virtual ~AWeapon();
		std::string			getName() const;
		int					getApCost() const;
		int					getDamage() const;
		virtual void		attack() const = 0;
	private :
		AWeapon();
		std::string			name;
		int					apCost;
		int					damage;
};

#endif
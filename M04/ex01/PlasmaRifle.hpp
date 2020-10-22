/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 01:25:11 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/20 01:40:27 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE
# define PLASMARIFLE

# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public :
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const &ref);
		PlasmaRifle			&operator=(PlasmaRifle const &ref);
		~PlasmaRifle();
		void				attack() const;
};

#endif
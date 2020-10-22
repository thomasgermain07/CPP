/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 01:58:00 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/20 01:59:36 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST
# define POWERFIST

# include <iostream>
# include "AWeapon.hpp"

class		PowerFist : public AWeapon
{
	public :
		PowerFist();
		PowerFist(PowerFist const &ref);
		PowerFist			&operator=(PowerFist const &ref);
		~PowerFist();
		void				attack() const;
};

#endif
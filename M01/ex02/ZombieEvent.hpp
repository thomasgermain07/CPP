/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 17:05:07 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/26 01:53:19 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT
# define ZOMBIEEVENT

#include "Zombie.hpp"
#include <iostream>

class ZombieEvent
{
	public :
		ZombieEvent();
		Zombie				*newZombie(std::string name);
		Zombie				*randomChump();
		void				setZombieType(std::string const &type);
		std::string			getZombieType() const;
	private :
		std::string			zombieType;
};

#endif

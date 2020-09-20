/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 17:05:07 by thgermai          #+#    #+#             */
/*   Updated: 2020/09/20 21:47:44 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT
# define ZOMBIEEVENT

#include "Zombie.hpp"
#include <iostream>

class ZombieEvent
{
	public :
		static std::string	setZombieType;
		static Zombie		*newZombie(std::string name);
		static Zombie		*randomChump();
};

#endif

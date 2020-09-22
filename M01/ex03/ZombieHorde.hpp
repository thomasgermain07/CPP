/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 15:55:31 by thgermai          #+#    #+#             */
/*   Updated: 2020/09/21 16:11:12 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE
# define ZOMBIEHORDE

#include "Zombie.hpp"

class ZombieHorde
{
	public :
		ZombieHorde(int n);
		void		announce();
		~ZombieHorde();
	private:
		Zombie		*array;
		int			n_zombie;
};

# endif

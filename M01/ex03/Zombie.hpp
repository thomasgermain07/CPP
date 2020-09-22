/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 17:07:20 by thgermai          #+#    #+#             */
/*   Updated: 2020/09/21 15:59:09 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
# define ZOMBIE

#include <iostream>

class		Zombie
{
	public :
		~Zombie();
		void			announce();
		std::string		name;
		std::string		type;
};

#endif

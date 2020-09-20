/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 17:07:20 by thgermai          #+#    #+#             */
/*   Updated: 2020/09/20 22:28:22 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
# define ZOMBIE

#include <iostream>

class		Zombie
{
	public :
		~Zombie();
		void			advert();
		void			announce();
		void			salutation();
		std::string		name;
		std::string		type;
};

#endif

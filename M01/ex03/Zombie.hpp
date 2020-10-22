/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 17:07:20 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/19 14:19:38 by thgermai         ###   ########.fr       */
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
		std::string		getName() const;
		void			setName(std::string const &_name);
		void			setType(std::string const &_type);
	private :
		std::string		name;
		std::string		type;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 17:07:56 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/12 17:20:54 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP
# define SUPERTRAP

# include <iostream>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public virtual NinjaTrap, public virtual FragTrap
{
	public :
		SuperTrap();
		SuperTrap(std::string const &_name);
		SuperTrap(SuperTrap const &ref);
		~SuperTrap();
		SuperTrap			&operator=(SuperTrap const &ref);
};

#endif

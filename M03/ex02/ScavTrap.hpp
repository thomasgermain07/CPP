/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 15:10:09 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/14 00:26:31 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP
# define SCAVTRAP

# include <iostream>
# include "ClapTrap.hpp"

# define HEADER "< " << this->name << " > "

class		ScavTrap : public ClapTrap
{
	public :
		ScavTrap();
		ScavTrap(std::string const &_name);
		ScavTrap(ScavTrap const &ref);
		~ScavTrap();
		ScavTrap			&operator=(ScavTrap const &ref);
		void				challengeNewcomer(std::string const &target);
};

#endif

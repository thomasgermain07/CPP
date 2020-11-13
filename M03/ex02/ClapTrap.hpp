/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 15:32:59 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/13 16:15:44 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP
# define CLAPTRAP

# include <iostream>
# include <string.h>

# define HEADER "< " << this->name << " > "

class ClapTrap
{
	public :
		ClapTrap();
		ClapTrap(ClapTrap const &ref);
		~ClapTrap();
		ClapTrap			&operator=(ClapTrap const &ref);
		int					getHp() const;
		std::string			getName() const ;
		int					getRangedAttackDmg() const;
		int					getMeleeAttackDmg() const;
		void				rangedAttack(std::string const &target) const;
		void				meleeAttack(std::string const &target) const;
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
	protected :
		int					hp;
		int					maxHp;
		int					energie;
		int					maxEnergie;
		int					lvl;
		std::string			name;
		int					meleeDmg;
		int					rangeDmg;
		int					armor;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 15:10:09 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/13 11:10:08 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP
# define SCAVTRAP

# include <iostream>

# define HEADER "< " << this->name << " > "

class		ScavTrap
{
	public :
		ScavTrap();
		ScavTrap(std::string const &_name);
		~ScavTrap();
		int					getHp();
		std::string			getName();
		int					getRangedAttackDmg();
		int					getMeleeAttackDmg();
		void				rangedAttack(std::string const &target);
		void				meleeAttack(std::string const &target);
		void				challengeNewcomer(std::string const &target);
	private :
		int					hp;
		int					maxHp;
		int					energie;
		int					maxEnergie;
		int					lvl;
		std::string 		name;
		int					meleeDmg;
		int					rangeDmg;
		int					armor;
};

#endif

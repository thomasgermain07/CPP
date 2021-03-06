/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 15:10:09 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/13 15:09:06 by thgermai         ###   ########.fr       */
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
		ScavTrap(ScavTrap const &ref);
		~ScavTrap();
		ScavTrap			&operator=(ScavTrap const &ref);
		int					getHp() const;
		std::string			getName() const ;
		int					getRangedAttackDmg() const;
		int					getMeleeAttackDmg() const;
		void				rangedAttack(std::string const &target);
		void				meleeAttack(std::string const &target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
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

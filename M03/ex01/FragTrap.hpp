/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 14:04:01 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/13 15:09:58 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP
# define FRAGTRAP

# include <iostream>

# define HEADER "< " << this->name << " > "

class		FragTrap
{
	public :
		FragTrap();
		FragTrap(std::string const &_name);
		FragTrap(FragTrap const &ref);
		~FragTrap();
		FragTrap			&operator=(FragTrap const &ref);
		int					getHp() const;
		std::string			getName() const;
		int					getRangedAttackDmg() const;
		int					getMeleeAttackDmg() const;
		void				rangedAttack(std::string const &target) const;
		void				meleeAttack(std::string const &target) const;
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		void				volthunter_dot_exe(std::string const &target);
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
		void				attack1(std::string const &target) const;
		void				attack2(std::string const &target) const;
		void				attack3(std::string const &target) const;
		void				attack4(std::string const &target) const;
		void				attack5(std::string const &target) const;
};

#endif

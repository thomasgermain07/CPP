/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 14:04:01 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/13 16:04:53 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP
# define FRAGTRAP

# include <iostream>
# include "ClapTrap.hpp"

# define HEADER "< " << this->name << " > "

class		FragTrap : public virtual ClapTrap
{
	public :
		FragTrap();
		FragTrap(std::string const &_name);
		FragTrap(FragTrap const &ref);
		~FragTrap();
		FragTrap			&operator=(FragTrap const &ref);
		void				volthunter_dot_exe(std::string const &target);
	private :
		void				attack1(std::string const &target) const;
		void				attack2(std::string const &target) const;
		void				attack3(std::string const &target) const;
		void				attack4(std::string const &target) const;
		void				attack5(std::string const &target) const;
};

#endif

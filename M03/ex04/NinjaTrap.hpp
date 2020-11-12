/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 00:47:26 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/12 17:19:53 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP
# define NINJATRAP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class		NinjaTrap : public virtual ClapTrap
{
	public :
		NinjaTrap();
		NinjaTrap(std::string const &_name);
		NinjaTrap(NinjaTrap const &ref);
		~NinjaTrap();
		NinjaTrap		&operator=(NinjaTrap const &ref);
		void			ninjaShoebox(ClapTrap &ref) const;
		void			ninjaShoebox(ScavTrap &ref) const;
		void			ninjaShoebox(FragTrap &ref) const;
		void			ninjaShoebox(NinjaTrap &ref) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 14:59:50 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/12 16:06:07 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM
# define VICTIM

# include <iostream>

class	Victim
{
	public :
		Victim(std::string const &_name);
		Victim(Victim const &ref);
		~Victim();
		Victim				&operator=(Victim const &ref);
		std::string			getName() const;
		void				introducte() const;
		virtual void		getPolymorphed() const;
	protected :
		std::string			name;
	private :
		Victim();
};

std::ostream		&operator<<(std::ostream &os, Victim const &victim);

#endif

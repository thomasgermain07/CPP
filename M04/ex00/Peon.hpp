/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 16:18:18 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/16 16:46:22 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON
# define PEON

# include "Victim.hpp"
# include <iostream>

class	Peon : virtual public Victim
{
	public :
		Peon();
		Peon(std::string const &_name);
		Peon(Peon const &ref);
		~Peon();
		Peon			&operator=(Peon const &ret);
		void			getPolymorphed() const;
};

#endif

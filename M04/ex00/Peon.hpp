/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 16:18:18 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/12 16:06:32 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON
# define PEON

# include "Victim.hpp"
# include <iostream>

class	Peon : public Victim
{
	public :
		Peon(std::string const &_name);
		Peon(Peon const &ref);
		~Peon();
		Peon			&operator=(Peon const &ret);
		void			getPolymorphed() const;
	private :
		Peon();
};

#endif

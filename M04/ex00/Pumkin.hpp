/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pumkin.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 14:36:44 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/16 14:37:05 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUMKIN
# define PUMKIN

# include "Victim.hpp"
# include <iostream>

class	Pumkin : public Victim
{
	public :
		Pumkin(std::string const &_name);
		Pumkin(Pumkin const &ref);
		~Pumkin();
		Pumkin			&operator=(Pumkin const &ret);
		void			getPolymorphed() const;
	private :
		Pumkin();
};

#endif

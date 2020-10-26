/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 17:24:40 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/24 17:36:26 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA
# define AMATERIA

#include <iostream>

class		AMateria
{
	public :
		AMateria();
		AMateria(AMateria const &ref);
		AMateria			&operator=(AMateria const &ref);
		~AMateria();
		unsigned int		getXP() const;
		std::string	const	&getType() const;
		virtual AMateria	*clone() const;
		virtual void		user(ICharacter &target);
	private :
		unsigned int		xp;
		std::string			type;
};

#endif
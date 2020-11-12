/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 17:24:40 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/11 16:27:37 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA
# define AMATERIA

# include <iostream>
# include <string.h>
# include "ICharacter.hpp"

class		ICharacter;

class		AMateria
{
	public :
		AMateria();
		AMateria(std::string const &type);
		AMateria(AMateria const &ref);
		AMateria			&operator=(AMateria const &ref);
		virtual ~AMateria();

		unsigned int		getXP() const;
		void				setXP(unsigned int const &value);
		std::string	const	&getType() const;

		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
	private :
		unsigned int		xp;
		std::string			type;
};

#endif
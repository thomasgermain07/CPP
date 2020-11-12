/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 20:06:15 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/10 21:24:27 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE
# define ICE

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public :
		Ice();
		Ice(Ice const &ref);
		Ice			&operator=(Ice const &ref);
		~Ice();
		AMateria		*clone() const;
		void			use(ICharacter &target);
};

#endif
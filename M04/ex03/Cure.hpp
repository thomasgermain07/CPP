/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 20:06:15 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/10 20:48:45 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE
# define CURE

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	public :
		Cure();
		Cure(Cure const &ref);
		Cure			&operator=(Cure const &ref);
		~Cure();
		AMateria		*clone() const;
		void			use(ICharacter &target);
};

#endif
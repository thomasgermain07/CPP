/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 21:19:21 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/11 17:22:24 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER
# define ICHARACTER

# include <iostream>
# include "AMateria.hpp"

class AMateria;

class ICharacter
{
	public :
		virtual ~ICharacter() {};
		virtual std::string const &getName() const = 0;
		virtual void equip(AMateria *m) = 0;
		virtual void unequip(int index) = 0;
		virtual void use(int index, ICharacter &target) = 0;
		virtual void printInv() const = 0; // to del
};

#endif
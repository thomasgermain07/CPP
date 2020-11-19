/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:54:35 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/16 15:04:15 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER
# define CHARACTER

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	public :
		Character(std::string const &_name);
		Character(Character const &ref);
		Character			&operator=(Character const &ref);
		~Character();
		std::string const 	&getName() const;
		void				equip(AMateria *m);
		void				unequip(int index);
		void				use(int index, ICharacter &target);
	private :
		AMateria			**inventory;
		std::string			name;
};

#endif
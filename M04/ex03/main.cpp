/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 17:24:25 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/12 00:29:44 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int				main()
{
	IMateriaSource		*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter			*moi = new Character("moi");

	AMateria			*tmp;
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	tmp = src->createMateria("cure");
	moi->equip(tmp);

	ICharacter			*bob = new Character("bob");

	moi->use(0, *bob);
	moi->use(1, *bob);

	delete bob;
	delete moi;
	delete src;

	system("leaks a.out");

	return 0;
}
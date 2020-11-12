/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 23:49:52 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/11 23:53:32 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE
# define MATERIASOURCE

# include <iostream>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public :
		MateriaSource();
		MateriaSource(MateriaSource const &ref);
		MateriaSource			&operator=(MateriaSource const &ref);
		~MateriaSource();
		void 					learnMateria(AMateria*);
		AMateria* 				createMateria(std::string const &type);
	private :
		AMateria				**stock;
};

#endif
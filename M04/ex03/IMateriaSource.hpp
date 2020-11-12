/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 23:48:33 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/11 23:52:42 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE
# define IMATERIASOURCE

# include <iostream>
# include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual 			~IMateriaSource() {}
		virtual void 		learnMateria(AMateria*) = 0;
		virtual AMateria* 	createMateria(std::string const & type) = 0;
};

#endif
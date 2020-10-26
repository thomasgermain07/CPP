/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:48:38 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/26 02:14:56 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN
# define HUMAN

#include "Brain.hpp"

class Human
{
	public :
		std::string		identify() const;
		Brain const		&getBrain() const;
	private :
		Brain const		brain;
};

#endif

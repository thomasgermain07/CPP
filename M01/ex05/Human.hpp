/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:48:38 by thgermai          #+#    #+#             */
/*   Updated: 2020/09/21 22:36:50 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN
# define HUMAN

#include "Brain.hpp"

class Human
{
	public :
		std::string		identify() const;
		const Brain		&getBrain() const;
	private :
		const Brain		brain;
};

#endif

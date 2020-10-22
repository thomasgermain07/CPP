/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 16:03:16 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/21 16:12:54 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD
# define ISQUAD

# include <iostream>
# include "ISpaceMarine.hpp"

class		ISquad
{
	public :
		virtual ~ISquad() {};
		virtual int				getCount() const = 0;
		virtual ISpaceMarine	*getUnit(int) const = 0;
		virtual int				push(ISpaceMarine*) = 0;
};

#endif
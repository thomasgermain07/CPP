/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 16:07:43 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/21 16:11:45 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE
# define ISPACEMARINE

# include <iostream>

class		ISpaceMarine
{
	public :
		virtual ~ISpaceMarine() {};
		virtual ISpaceMarine*		clone() const = 0;
		virtual void				battleCry() const = 0;
		virtual void				rangedAttack() const = 0;
		virtual void				meleeAttack() const = 0;
};

#endif
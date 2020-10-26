/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 21:56:14 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/21 22:06:24 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR
# define ASSAULTTERMINATOR

# include "ISpaceMarine.hpp"
# include <iostream>

class	AssaultTerminator : public ISpaceMarine
{
	public :
		AssaultTerminator();
		AssaultTerminator(AssaultTerminator const &ref);
		AssaultTerminator		&operator=(AssaultTerminator const &ref);
		~AssaultTerminator();
		ISpaceMarine		*clone() const;
		void				battleCry() const;
		void				rangedAttack() const;
		void				meleeAttack() const;
};

#endif
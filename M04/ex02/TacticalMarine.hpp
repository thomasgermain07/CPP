/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 21:56:14 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/21 22:06:24 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE
# define TACTICALMARINE

# include "ISpaceMarine.hpp"
# include <iostream>

class	TacticalMarine : public ISpaceMarine
{
	public :
		TacticalMarine();
		TacticalMarine(TacticalMarine const &ref);
		TacticalMarine		&operator=(TacticalMarine const &ref);
		~TacticalMarine();
		ISpaceMarine		*clone() const;
		void				battleCry() const;
		void				rangedAttack() const;
		void				meleeAttack() const;
};

#endif
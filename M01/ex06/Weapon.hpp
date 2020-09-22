/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 12:50:27 by thgermai          #+#    #+#             */
/*   Updated: 2020/09/22 12:57:40 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON
# define WEAPON

# include <iostream>

class Weapon
{
	public :
		Weapon(std::string _type);
		const std::string		&getType() const;
		void					setType(std::string _type);
	private :
		std::string				type;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 14:46:55 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/20 14:55:58 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT
# define SUPERMUTANT

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant();
		SuperMutant(SuperMutant const &ref);
		SuperMutant			&operator=(SuperMutant const &ref);
		~SuperMutant();
		void				takeDamage(int dmg);
};


#endif



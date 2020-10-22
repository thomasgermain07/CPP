/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 02:04:11 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/20 15:02:08 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY
# define ENEMY

# include <iostream>

class		Enemy
{
	public :
		Enemy();
		Enemy(int _hp, std::string const &_type);
		Enemy(Enemy const &ref);
		Enemy			&operator=(Enemy const &ref);
		virtual ~Enemy();
		int				getHp() const;
		std::string		getType() const;
		virtual void	takeDamage(int dmg);
	private :
		int				hp;
		std::string		type;
};

#endif
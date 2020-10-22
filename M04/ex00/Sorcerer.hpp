/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 13:12:36 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/19 14:57:22 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER
# define SORCERER

# include <iostream>
# include "Victim.hpp"
# include "Peon.hpp"

class	Sorcerer
{
	public :
		Sorcerer(std::string const &_name, std::string const &_title);
		Sorcerer(Sorcerer const &ref);
		~Sorcerer();
		Sorcerer			&operator=(Sorcerer const &ref);
		std::string			getName() const;
		std::string			getTitle() const;
		void				introducte() const;
		void				polymorph(Victim const &v) const;
	private :
		Sorcerer();
		std::string			name;
		std::string			title;
};

std::ostream		&operator<<(std::ostream &os, Sorcerer const &sorcerer);

#endif

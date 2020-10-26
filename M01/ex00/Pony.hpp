/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 00:48:59 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/26 01:21:41 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY
# define PONY

#include <iostream>

class Pony
{
	public :
		Pony();
		Pony(std::string name, std::string color);
		~Pony();
		void			feed_the_pony() const;
		void			presentation() const;
		static int		n_instance;
	private :
		std::string		m_name;
		std::string		m_color;
};

#endif

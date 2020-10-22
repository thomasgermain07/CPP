/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 00:48:59 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/19 13:32:03 by thgermai         ###   ########.fr       */
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
		void			feed_the_pony();
		void			presentation();
		static int		n_instance;
	private :
		std::string		m_name;
		std::string		m_color;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 05:33:56 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/19 06:13:31 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND
# define EASYFIND

# include <iostream>
# include <list>
# include <vector>
# include <deque>
# include <iterator>

template<typename T>
typename T::iterator		easyfind(T &cont, int const value)
{
	typename	T::iterator it;

	for (it = cont.begin(); it != cont.end(); ++it)
		if	(*it == value)
			return it;
	return it;
}

#endif
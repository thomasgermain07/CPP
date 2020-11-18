/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 21:35:31 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/18 04:33:32 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER
# define WHATEVER

template <typename T>
void		swap(T &s1, T &s2)
{
	T		temp = s1;
	s1 = s2;
	s2 = temp;
}

template <typename T>
T const			&min(T const &v1, T const &v2)
{
	if (v1 == v2)
		return v2;
	else
		return v1 < v2 ? v1 : v2;
}

template <typename T>
T const			&max(T const &v1, T const &v2)
{
	if (v1 == v2)
		return v2;
	else
		return v1 > v2 ? v1 : v2;
}

#endif
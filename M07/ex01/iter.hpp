/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 04:40:02 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/19 02:39:04 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER
# define ITER

template<typename T>
void			iter(T *array, int size, void (*func)(T &))
{
	if (!array)
		return ;
	for (int i = 0; i < size; i++)
		(*func)(array[i]);
	return ;
}

#endif
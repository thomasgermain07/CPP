/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 16:30:18 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/21 21:49:42 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
	this->head = NULL;
	this->tail = NULL;
	this->n_container = 0;
	return ;
}

Squad::Squad(Squad const &ref)
{
	*this = ref;
	return ;
}

Squad				&Squad::operator=(Squad const &ref)
{
	t_container		*current;

	this->n_container = ref.n_container;
	if (head)
		this->cleanCont();
	current = ref.head;
	if (!current)
		return *this;
	while (current)
	{
		this->push(current->p);
		current = current->next;
	}
	return *this;
}

Squad::~Squad()
{
	this->cleanCont();
	return ;
}

ISpaceMarine		*Squad::getUnit(int n) const
{
	t_container		*current = this->head;

	if (n > this->n_container || n < 0)
	{
		std::cerr << "Index out of n_container" << std::endl;
		return NULL;
	}
	while (current && n-- > 0)
		current = current->next;
	return current->p;
}

int					Squad::getCount() const
{
	return this->n_container;
}

int					Squad::push(ISpaceMarine *p)
{
	t_container		*newCont;

	if (!this->checkCont(p))
	{
		std::cerr << p << " Is already in the list" << std::endl;
		return 0;
	}
	newCont = new t_container;
	newCont->p = p;
	newCont->next = NULL;
	if (!this->head)
	{
		this->head = newCont;
		this->tail = newCont;
	}
	else
	{
		this->tail->next = newCont;
		this->tail = newCont;
	}
	this->n_container++;
	return 1;
}

int					Squad::checkCont(ISpaceMarine *p) const
{
	t_container		*current = this->tail;

	if (!p)
		return 0;
	while (current)
	{
		if (current->p == p)
			return 0;
	}
	return 1;
}

void				Squad::cleanCont()
{
	t_container		*current = this->head;
	t_container		*next;

	if (current)
		next = current->next;
	while (current)
	{
		delete current;
		current = next;
		if (next)
			next = next->next;
	}
	return ;
}
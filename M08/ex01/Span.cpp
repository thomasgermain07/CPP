/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 06:29:37 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/19 07:50:34 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

Span::Span() : capacity(0) {}
Span::Span(unsigned int const N) : capacity(N) {}
Span::Span(Span const &ref) { *this = ref; }
Span::~Span() {}

Span					&Span::operator=(Span const &ref)
{
	this->capacity = ref.capacity;
	this->tab = ref.tab;
	return *this;
}

int						Span::getCapacity() const { return this->capacity; }
std::vector<int>		Span::getTab() const { return this->tab; }

void					Span::addNumber(int const value)
{
	if (this->tab.size() >= this->capacity)
		throw FullArrayException();
	this->tab.push_back(value);
}

int						Span::shortestSpan() const
{
	if (this->tab.size() < 2)
		throw NotEnoughValueException();
	return *std::min_element(this->tab.begin(), this->tab.end());
}

int						Span::longestSpan() const
{
	if (this->tab.size() < 2)
		throw NotEnoughValueException();
	return *std::max_element(this->tab.begin(), this->tab.end());
}

const char				*Span::FullArrayException::what() const throw()
{
	return "Array is full";
}

const char				*Span::NotEnoughValueException::what() const throw()
{
	return "Not enough value in span to execute a finding function";
}

std::ostream			&operator<<(std::ostream &os, Span const &ref)
{
	std::vector<int>		tab = ref.getTab();

	os << "Span(";
	if (!tab.size())
		os << " empty ";
	for (int i = 0; i < tab.size(); i++)
	{
		os << tab[i];
		if (i < tab.size() - 1)
			os << ", ";
	}
	os << ")";
	return os;
}
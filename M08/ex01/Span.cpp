/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 06:29:37 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/20 22:17:51 by thgermai         ###   ########.fr       */
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

int						Span::size() const { return this->tab.size(); }

void					Span::addNumber(int const value)
{
	if (this->tab.size() >= this->capacity)
		throw FullArrayException();
	this->tab.push_back(value);
}

void					Span::addNumber(unsigned int from, unsigned int to, int value)
{
	if (to >= this->capacity)
		throw OutOfRangeException();
	if (from >= to)
		throw RangeErrorException();

	if (to > this->tab.size())
		tab.resize(to + 1);
	std::vector<int>::iterator		it = this->tab.begin() + from;
	std::fill(it, it + (to - from + 1), value);
}

unsigned int			Span::shortestSpan() const
{
	unsigned int				min = UINT_MAX;
	unsigned int				diff = 0;
	std::vector<int>			sorted(this->tab);
	std::vector<int>::iterator	it;
	long int					v1;
	long int					v2;

	if (this->tab.size() < 2)
		throw NotEnoughValueException();

	/* *** Sort and erase multiple occurence *** */
	std::sort(sorted.begin(), sorted.end());
	it = std::unique(sorted.begin(), sorted.end());
	sorted.resize(std::distance(sorted.begin(), it));

	/* *** Check the span bewtween sorted and unique values *** */
	for (int i = 0; i < sorted.size() - 1; i++)
	{
		v1 = static_cast<long>(sorted[i]);
		v2 = static_cast<long>(sorted[i + 1]);
		diff = static_cast<unsigned int>(std::labs(v1 - v2));
		if (diff < min)
			min = static_cast<unsigned int>(diff);
	}
	return min && diff ? min : 0;
}

unsigned int			Span::longestSpan() const
{
	unsigned int	diff = 0;

	if (this->tab.size() < 2)
		throw NotEnoughValueException();

	int			max = *std::max_element(this->tab.begin(), this->tab.end());
	int			min = *std::min_element(this->tab.begin(), this->tab.end());

	diff = max - min;
	return diff;
}

const char				*Span::FullArrayException::what() const throw()
{
	return "Array is full";
}

const char				*Span::NotEnoughValueException::what() const throw()
{
	return "Not enough value in span to execute a finding function";
}

const char				*Span::OutOfRangeException::what() const throw()
{
	return "Trying to access a value out of the Span";
}

const char				*Span::RangeErrorException::what() const throw()
{
	return "Can fill only forward";
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
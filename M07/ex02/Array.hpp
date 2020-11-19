/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 08:20:54 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/19 02:22:37 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY
# define ARRAY

# include <iostream>

struct IndexOutLimitsException : std::exception
{
	virtual const char *what() const throw() { return "index out of limits"; }
};

template <typename T>
class		Array
{
	public:
		Array() : value(NULL),  n_elem(0) {}
		Array(unsigned int n) : value(new T[n]), n_elem(n)
		{
			bzero(static_cast<void *>(this->value), (this->n_elem * sizeof(T)));
		}
		Array(Array<T> const &ref) { *this = ref; }
		~Array()
		{
			if (this->n_elem)
				delete[] this->value;
		}

		Array			&operator=(Array const &ref)
		{
			if (!ref.n_elem)
				return *this;
			if (this->n_elem)
				delete[] this->value;
			this->n_elem = ref.n_elem;
			if (this->n_elem)
				this->value = new T[this->n_elem];
			for (int i = 0; i < this->n_elem; i++)
				this->value[i] = ref[i];
			return *this;
		}

		int					size() const { return this->n_elem; }

		T					&operator[](int i) const
		{
			if (i >= this->n_elem)
				throw IndexOutLimitsException();
			return value[i];
		}

	private :
		T				*value;
		unsigned int	n_elem;
};

template <typename T>
std::ostream 				&operator<<(std::ostream &os, Array<T> const &ref)
{
	os << "Array(";
	if (ref.size() == 0)
		os << " empty ";
	for (int i = 0; i < ref.size(); i++)
	{
		os << ref[i];
		if (i != ref.size() - 1)
			os << ", ";
	}
	os << ")";
	return os;
}

template <typename T>
class		Array<const T>
{
	public:
		Array() : value(NULL),  n_elem(0) {}
		Array(unsigned int n) : value(new T[n]), n_elem(n)
		{
			bzero(static_cast<void *>(this->value), (this->n_elem * sizeof(T)));
		}
		Array(Array<T> const &ref) : n_elem(0)
		{
			if (!ref.size())
				this->n_elem = 0;
			if (this->n_elem)
				delete[] this->value;
			this->n_elem = ref.size();
			if (this->n_elem)
				this->value = new T[this->n_elem];
			for (int i = 0; i < this->n_elem; i++)
				this->value[i] = ref[i];
		}
		~Array()
		{
			if (this->n_elem)
				delete[] this->value;
		}

		Array				&operator=(Array const &ref)
		{
			(void)ref;
			return *this;
		}

		int					size() const { return this->n_elem; }

		T const				&operator[](int i) const
		{
			if (i >= this->n_elem)
				throw IndexOutLimitsException();
			return value[i];
		}

	private :
		T 				*value;
		unsigned int	n_elem;
};

#endif
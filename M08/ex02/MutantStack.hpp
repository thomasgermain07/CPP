/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 06:05:41 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/20 08:24:12 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK
# define MUTANTSTACK

# include <iostream>
# include <stack>
# include <deque>
# include <iterator>

template <typename T>
class		MutantStack : virtual public std::stack<T>
{
	public:
		MutantStack() {}
		MutantStack(MutantStack const &ref) { *this = ref; };
		virtual ~MutantStack() {}

		MutantStack 			&operator=(MutantStack const &ref)
		{
			typename std::deque<T>::const_iterator	it;

			for (it = ref.begin(); it != ref.end(); ++it)
			{
				std::stack<T>::push(*it);
				this->data.push_front(*it);
			}
			return *this;
		}

		void					push(T const &value)
		{
			std::stack<T>::push(value);
			data.push_front(value);
		}

		void					pop()
		{
			std::stack<T>::pop();
			data.pop_front();
		}

		T						top() { return *data.begin(); }

		typedef typename std::deque<T>::iterator		iterator;
		typedef typename std::deque<T>::const_iterator	const_iterator;

		iterator				begin() { return data.begin(); }
		iterator				end() { return data.end(); }

		const_iterator			begin() const { return data.begin(); }
		const_iterator			end() const { return data.end(); }

	private :
		std::deque<T>			data;
};

#endif
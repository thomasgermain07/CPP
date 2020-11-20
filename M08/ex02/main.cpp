/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 20:38:23 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/20 08:23:02 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "MutantStack.hpp"
#include <list>

int			main(int ac, char **av)
{
	(void)ac;
	(void)av;

	std::string						words[5] = {"salut", "bonjour", "bonsoir", "fatigue", "liste"};

	MutantStack<std::string>		mstack;
	MutantStack<std::string>		mstack2;
	std::list<std::string>			l;
	std::stack<std::string>			s;

	for (int i = 0; i < 5; i++)
	{
		s.push(words[i]);
		mstack.push(words[i]);
		l.push_front(words[i]);
	}

	std::cout << "\t---> Different container size" << std::endl;
	std::cout << "MutantStack : " << mstack.size() << std::endl;
	std::cout << "List : " << l.size() << std::endl;
	std::cout << "Stack : " << s.size() << std::endl;

	std::cout << "\n\t---> Stack content" << std::endl;
	{
		while (!s.empty())
		{
			std::cout << s.top() << std::endl;
			s.pop();
		}
	}

	std::cout << "\t---> List content" << std::endl;
	{
		std::list<std::string>::iterator		it;
		for (it = l.begin(); it != l.end(); ++it)
			std::cout << *it << std::endl;
	}

	std::cout << "\t---> MutantStack content access with iterator" << std::endl;
	{
		MutantStack<std::string>::iterator			it;

		for (it = mstack.begin(); it != mstack.end(); ++it)
			std::cout << *it << std::endl;
	}
	std::cout << "\t---> MutantStack size after accessed with iterator (shouldn't be 0)" << std::endl;
	std::cout << "MutantStack size : " << mstack.size() << std::endl;

	std::cout << "\n\t---> Copying MutantStack to another MutantStack to check copy later (no output)\n" << std::endl;
	mstack2 = mstack;

	std::cout << "\t---> MutantStack content access with top/pop" << std::endl;
	{
		while (!mstack.empty())
		{
			std::cout << mstack.top() << std::endl;
			mstack.pop();
		}
	}

	std::cout << "\t---> Stack and MutantStack size after popped all value (should be 0)" << std::endl;
	std::cout << "MutantStack : " << mstack.size() << std::endl;
	std::cout << "Stack : " << s.size() << std::endl;

	std::cout << "\t---> Creating Stack from the earlier MutantStack copy (should not crash)" << std::endl;
	std::stack<std::string>			s2(mstack2);
	while (!s2.empty())
	{
		std::cout << s2.top() << std::endl;
		s2.pop();
	}

	std::cout << "\n\t---> Verifying that copy worked (former MS is now empty so the copy shouldn't be)" << std::endl;
	{
		MutantStack<std::string>::iterator			it;

		for (it = mstack2.begin(); it != mstack2.end(); ++it)
			std::cout << *it << std::endl;
	}

	return 0;
}
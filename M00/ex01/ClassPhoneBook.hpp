/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 16:01:06 by thgermai          #+#    #+#             */
/*   Updated: 2020/09/19 23:01:50 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSPHONEBOOK
# define CLASSPHONEBOOK

#include "ClassContact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		void		add_contact();
		void		search_contact();
	private :
		Contact		contacts[8];
		int			n_contact;
};

#endif

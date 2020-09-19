/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 15:22:57 by thgermai          #+#    #+#             */
/*   Updated: 2020/09/19 23:00:21 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT
# define CONTACT

#include <string>

class Contact
{
	public :
		void		get_info();
		void		create_contact();
		std::string	info[11];
		enum
		{
			first_name = 0,
			last_name,
			nickname,
			login,
			postal,
			mail,
			phone,
			birthday,
			meal,
			underwear,
			secret
		};
};

#endif

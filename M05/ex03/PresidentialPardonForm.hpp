/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 21:04:27 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/16 17:25:41 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM
# define PRESIDENTIALPARDONFORM

# include <iostream>
# include "Form.hpp"

class		PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string const &_target);
		PresidentialPardonForm(PresidentialPardonForm const &ref);
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm 		&operator=(PresidentialPardonForm const &ref);

		void						execSub() const;
	private :
		PresidentialPardonForm();

};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 18:49:19 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/16 17:22:54 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM
# define SHRUBBERYCREATIONFORM

# include <iostream>
# include "Form.hpp"

class		ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &ref);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm 		&operator=(ShrubberyCreationForm const &ref);

		void						execSub() const;
	private :
		ShrubberyCreationForm();
};

#endif
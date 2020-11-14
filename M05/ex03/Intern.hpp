/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 23:02:07 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/15 00:09:03 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN
# define INTERN

# include <iostream>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class		Intern
{
	public:
		Intern();
		Intern(Intern const &ref);
		~Intern();
		Intern 			&operator=(Intern const &ref);

		Form			*makeForm(std::string _type, std::string const &_target) const;
		Form			*formCreator(std::string const &_target, int _type) const;

		struct			FormUnknownException : public std::exception
		{
			public :
				FormUnknownException(std::string const &_type);
				const char	*what() const throw();
				virtual ~FormUnknownException() throw();
			private :
				std::string			errorType;
		};
};

#endif
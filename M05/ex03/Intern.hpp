/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 23:02:07 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/16 01:11:51 by thgermai         ###   ########.fr       */
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

		struct			FormUnknownException : public std::exception
		{
			FormUnknownException(std::string const &_type);
			const char	*what() const throw();
			virtual ~FormUnknownException() throw();
			std::string			errorType;
		};

	private :
		Form			*createSCF(std::string const &_target) const ;
		Form			*createRQF(std::string const &_target) const ;
		Form			*createPPF(std::string const &_target) const ;
};

#endif
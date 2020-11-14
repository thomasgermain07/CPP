/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 23:40:51 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/14 23:56:17 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM
# define FORM

# include <iostream>
# include "Bureaucrat.hpp"

class		Bureaucrat;

class		Form
{
	public :
		Form();
		Form(std::string const &_name, int _signGrade, int _execGrade);
		Form(Form const &ref);
		Form					&operator=(Form const &ref);
		virtual ~Form();

		std::string				getName() const;
		bool					getStatus() const;
		int						getSignGrade() const;
		int						getExecGrade() const;
		std::string				getTarget() const;
		void					setTarget(std::string const &_target);
		void					beSigned(Bureaucrat const &b);

		void					execute(Bureaucrat const &executor) const;
		virtual void			execSub() const = 0;

		struct GradeTooHighException : public std::exception
		{
			const char 			*what() const throw();
		};
		struct GradeTooLowException : public std::exception
		{
			const char 			*what() const throw();
		};
		struct FormNotSignedException : public std::exception
		{
			const char			*what() const throw();
		};
	private :
		std::string const		name;
		bool					status;
		int	const				signGrade;
		int	const				execGrade;
		std::string 			target;
};

std::ostream					&operator<<(std::ostream &os, Form const &f);

#endif
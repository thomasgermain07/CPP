/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:32:19 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/14 00:52:27 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
# define BUREAUCRAT

# include <iostream>
# include "Form.hpp"

class			Form;

class			Bureaucrat
{
	public :
		Bureaucrat();
		Bureaucrat(std::string const &_name, int const _grade);
		Bureaucrat(Bureaucrat const &ref);
		Bureaucrat				&operator=(Bureaucrat const &ref);
		~Bureaucrat();
		std::string const 		getName() const;
		int						getGrade() const;
		void					increaseGrade();
		void					decreaseGrade();

		void					signForm(Form *f) const;

		/* *********** exception ***********  */
		struct	GradeTooHighException : public std::exception
		{
			const char 			*what() const throw();
		};
		struct	GradeTooLowException : public std::exception
		{
			const char			 *what() const throw();
		};
	private :
		std::string const		name;
		int						grade;
};

std::ostream				&operator<<(std::ostream &os, Bureaucrat const &b);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 20:45:33 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/14 20:48:12 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM
# define ROBOTOMYREQUESTFORM

# include <iostream>
# include "Form.hpp"

class		RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string const &_target);
		RobotomyRequestForm(RobotomyRequestForm const &ref);
		~RobotomyRequestForm();
		RobotomyRequestForm 		&operator=(RobotomyRequestForm const &ref);

		void						execSub() const;
	private :
		RobotomyRequestForm();
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 18:51:19 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/15 00:24:36 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <sstream>

ShrubberyCreationForm::ShrubberyCreationForm()
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &_target) : Form("shrubbery creation", 145, 137)
{
	this->setTarget(_target);
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &ref) : Form("shrubbery creation", 145, 137)
{
	*this = ref;
	return ;
}

ShrubberyCreationForm					&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &ref)
{
	Form::operator=(ref);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

	return ;
}

void				ShrubberyCreationForm::execSub() const
{
	std::ofstream		os;
	std::stringstream	ss;
	std::string			tree[16] = {"          .     .  .      +     .      .          .",
									"     .       .      .     #       .           .",
									"        .      .         ###            .      .      .",
									"      .      .   \"#:. .:##\"##:. .:#\"  .      .",
									"          .      . \"####\"###\"####\"  .",
									"       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .",
									"  .             \"#########\"#########\"        .        .",
									"        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .",
									"     .     .  \"#######\"\"##\"##\"\"#######\"                  .",
									"                .\"##\"#####\"#####\"##\"           .      .",
									"    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .",
									"      .     \"#######\"##\"#####\"##\"#######\"      .     .",
									"    .    .     \"#####\"\"#######\"\"#####\"    .      .",
									"            .     \"      000      \"    .     .",
									"       .         .   .   000     .        .       .",
									".. .. ..................O000O........................ ...... ..."};
	ss << this->getTarget() << "_shrubbery";
	os.open(ss.str());
	if (os.fail())
	{
		std::cerr << "Opening file probleme occured" << std::endl;
		return ;
	}
	for (int i = 0; i < 16; i++)
		os << tree[i] << std::endl;
	os.close();
	return ;
}
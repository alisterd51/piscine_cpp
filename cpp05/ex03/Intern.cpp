/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:55:30 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/19 10:06:26 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"

Intern::Intern(void)
{
	this->_formName[0] = ShrubberyCreationForm().getName();
	this->_formName[1] = RobotomyRequestForm().getName();
	this->_formName[2] = PresidentialPardonForm().getName();
	this->_f[0] = &Intern::newShrubberyCreationForm;
	this->_f[1] = &Intern::newRobotomyRequestForm;
	this->_f[2] = &Intern::newPresidentialPardonForm;
	return ;
}

Intern::Intern(Intern const &src)
{
	(void)src;
	this->_formName[0] = ShrubberyCreationForm().getName();
	this->_formName[1] = RobotomyRequestForm().getName();
	this->_formName[2] = PresidentialPardonForm().getName();
	this->_f[0] = &Intern::newShrubberyCreationForm;
	this->_f[1] = &Intern::newRobotomyRequestForm;
	this->_f[2] = &Intern::newPresidentialPardonForm;
	return ;
}

Intern::~Intern(void)
{
	return ;
}

Intern	&Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return (*this);
}

Form    *Intern::newShrubberyCreationForm(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

Form    *Intern::newRobotomyRequestForm(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

Form    *Intern::newPresidentialPardonForm(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

Form    *Intern::makeForm(std::string const &formName, std::string const &target)
{
	Form	*newForm;

	for (int id = 0; id < 3; id++)
	{
		if (_formName[id].compare(formName) == 0)
		{
			newForm = (this->*_f[id])(target);
			std::cout << "Intern creates " << *newForm << std::endl;
			return (newForm);
		}
	}
	std::cout
		<< "sorry, I don't recognize this form"
		<< std::endl;
	return (NULL);
}

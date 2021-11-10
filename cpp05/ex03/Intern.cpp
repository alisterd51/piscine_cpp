/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:55:30 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/10 20:12:29 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"

Intern::Intern(void)
{
	this->_forms = new Form*[4];
	this->_forms[0] = new ShrubberyCreationForm;
	this->_forms[1] = new RobotomyRequestForm;
	this->_forms[2] = new PresidentialPardonForm;
	this->_forms[3] = NULL;
	return ;
}

Intern::Intern(Intern const &src)
{
	(void)src;
	this->_forms = new Form*[4];
	this->_forms[0] = new ShrubberyCreationForm;
	this->_forms[1] = new RobotomyRequestForm;
	this->_forms[2] = new PresidentialPardonForm;
	this->_forms[3] = NULL;
	return ;
}

Intern::~Intern(void)
{
	int i;

	i = 0;
	while (this->_forms && this->_forms[i] != NULL)
	{
		delete this->_forms[i];
		i++;
	}
	delete [] this->_forms;
	return ;
}

Intern	&Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return (*this);
}

Form    *Intern::makeForm(std::string const &formName, std::string const &target)
{
	int		i;
	Form	*newForm;

	i = 0;
	while (this->_forms[i] != NULL)
	{
		if (formName == this->_forms[i]->getName())
		{
			newForm = this->_forms[i]->clone(target);
			std::cout
				<< "Intern creates " << *newForm
				<< std::endl;
			return (newForm);
		}
		i++;
	}
	std::cout
		<< "sorry, I don't recognize this form"
		<< std::endl;
	return (NULL);
}

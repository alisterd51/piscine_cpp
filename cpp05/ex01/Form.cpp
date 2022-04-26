/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:20:59 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/18 18:42:49 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) :
	_name("anonymous form"),
	_isSigned(false),
	_requiredGradeSignature(150),
	_requiredGradeExecution(150)
{
	return ;
}

Form::Form(Form const &src) :
	_name(src._name),
	_isSigned(src._isSigned),
	_requiredGradeSignature(src._requiredGradeSignature),
	_requiredGradeExecution(src._requiredGradeExecution)
{
	return ;
}

Form::Form(std::string const &name,
		unsigned int const &rgs,
		unsigned int const &rge) :
	_name(name),
	_isSigned(false),
	_requiredGradeSignature(rgs),
	_requiredGradeExecution(rge)
{
	if (rgs < 1 || rge < 1)
		throw Form::GradeTooHighException();
	else if (rgs > 150 || rge > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::~Form(void)
{
	return ;
}

Form	&Form::operator=(Form const &rhs)
{
	if (this != &rhs)
	{
		this->_isSigned = rhs._isSigned;
	}
	return (*this);
}

Form	&Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_requiredGradeSignature)
		this->_isSigned = true;
	else
		throw Form::GradeTooLowException();
	return (*this);
}

std::string const	&Form::getName(void) const
{
	return (this->_name);
}

bool const	&Form::getIsSigned(void) const
{
	return (this->_isSigned);
}

unsigned int const	&Form::getGradeSignature(void) const
{
	return (this->_requiredGradeSignature);
}

unsigned int const	&Form::getGradeExecution(void) const
{
	return (this->_requiredGradeExecution);
}

std::ostream	&operator<<(std::ostream &o, Form const &i)
{
	o
		<< i.getName()
		<< ": status: " << i.getIsSigned()
		<< ", required for signature: " << i.getGradeSignature()
		<< " and required for execution: " << i.getGradeExecution();
	return (o);
}

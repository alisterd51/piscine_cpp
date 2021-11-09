/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 23:49:13 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/08 18:54:22 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) :
	_name("anonymous"),
	_grade(150)
{
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) :
	_name(src._name),
	_grade(src._grade)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string const &name, unsigned int const &grade) :
	_name(name),
	_grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
	{
		this->_grade = rhs.getGrade();
	}
	return (*this);
}

Bureaucrat	&Bureaucrat::operator++(void)
{
	if (this->_grade > 1)
		this->_grade = this->_grade - 1;
	return (*this);
}

Bureaucrat	Bureaucrat::operator++(int)
{
	Bureaucrat	post(*this);

	operator++();
	return (post);
}

Bureaucrat	&Bureaucrat::operator--(void)
{
	if (this->_grade < 150)
		this->_grade = this->_grade + 1;
	return (*this);
}

Bureaucrat	Bureaucrat::operator--(int)
{
	Bureaucrat	post(*this);

	operator--();
	return (post);
}

std::string const	Bureaucrat::getName(void) const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::signForm(Form &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout
			<< *this
			<< " signs "
			<< form
			<< std::endl;
	}
	catch (std::exception& e)
	{
		std::cout
			<< *this
			<< " cannot sign because "
			<< e.what()
			<< std::endl;
	}
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &i)
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return (o);
}
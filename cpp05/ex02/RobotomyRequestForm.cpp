/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:33:36 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/09 01:10:58 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) :
	Form("robotomy request form", 72, 45)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) :
	Form("robotomy request form", 72, 45)
{
	(void)src;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

RobotomyRequestForm
	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	if (this != &rhs)
		this->setIsSigned(rhs.getIsSigned());
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeExecution())
		throw Form::GradeTooLowException();
	else if (this->getIsSigned() == false)
		throw Form::NotSignedException();
	else
	{
		std::cout
			<< "Bzzzzzzz Bzzzzzzz.."
			<< std::endl;
		srand(time(NULL));
		if (rand() % 100 < 50)
		{
			std::cout
				<< executor
				<< " has been successfully robotomized"
				<< std::endl;
		}
		else
		{
			std::cout
				<< "robotomization of "
				<< executor
				<< " failed"
				<< std::endl;
		}
	}
	return ;
}

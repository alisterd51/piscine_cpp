/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:33:36 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/09 02:45:45 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :
	Form("presidential pardon", "anonymous", 25, 5)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) :
	Form(src.getName(),
			src.getTarget(),
			src.getGradeSignature(),
			src.getGradeExecution())
{
	this->setIsSigned(src.getIsSigned());
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
	Form("presidential pardon", target, 25, 5)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

PresidentialPardonForm
	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	if (this != &rhs)
		this->setIsSigned(rhs.getIsSigned());
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeExecution())
		throw Form::GradeTooLowException();
	else if (this->getIsSigned() == false)
		throw Form::NotSignedException();
	else
	{
		std::cout
			<< this->getTarget()
			<< " was forgiven by Zaphod Beeblebrox"
			<< std::endl;
	}
	return ;
}

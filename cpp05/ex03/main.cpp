/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 01:29:22 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/10 20:17:22 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	{
		Bureaucrat	kevin("kevin", 150);
		Bureaucrat	jean("jean", 50);
		Bureaucrat	isildur("isildur", 1);
		Intern		slave;
		Form		*formTest = slave.makeForm("test", "test");
		Form		*form1 = slave.makeForm("shrubbery creation", "home");
		std::cout
			<< "new form:\t"
			<< *form1
			<< std::endl;
		Form		*form2 = slave.makeForm("robotomy request", "anclarma");
		std::cout
			<< "new form:\t"
			<< *form2
			<< std::endl;
		Form		*form3 = slave.makeForm("presidential pardon", "Xavier");
		std::cout
			<< "new form:\t"
			<< *form3
			<< std::endl;

		kevin.executeForm(*form1);

		kevin.signForm(*form1);
		jean.signForm(*form1);
		isildur.signForm(*form1);
		kevin.executeForm(*form1);
		jean.executeForm(*form1);
		isildur.executeForm(*form1);

		kevin.executeForm(*form2);

		kevin.signForm(*form2);
		jean.signForm(*form2);
		isildur.signForm(*form2);
		kevin.executeForm(*form2);
		jean.executeForm(*form2);
		isildur.executeForm(*form2);

		kevin.executeForm(*form3);

		kevin.signForm(*form3);
		jean.signForm(*form3);
		isildur.signForm(*form3);
		kevin.executeForm(*form3);
		jean.executeForm(*form3);
		isildur.executeForm(*form3);

		delete formTest;
		delete form1;
		delete form2;
		delete form3;
	}
	return (0);
}

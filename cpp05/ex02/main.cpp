/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 01:29:22 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/19 10:23:56 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#define BLACK		"\033[1;30m"
#define RED			"\033[1;31m"
#define GREEN		"\033[1;32m"
#define YELLOW		"\033[1;33m"
#define BLUE		"\033[1;34m"
#define MAGENTA		"\033[1;35m"
#define CYAN		"\033[1;36m"
#define WHITE		"\033[1;37m"
#define RESET		"\033[0m"

int	main(void)
{
	Bureaucrat	kevin("kevin", 150);
	Bureaucrat	jean("jean", 50);
	Bureaucrat	isildur("isildur", 1);

	std::cout << MAGENTA << "ShrubberyCreationForm home" << RESET << std::endl;
	{
		Form		*form1 = new ShrubberyCreationForm("home");

		std::cout << "new form:\t" << *form1 << std::endl;
		kevin.executeForm(*form1);
		kevin.signForm(*form1);
		jean.signForm(*form1);
		isildur.signForm(*form1);
		kevin.executeForm(*form1);
		jean.executeForm(*form1);
		isildur.executeForm(*form1);
		delete form1;
	}
	std::cout << MAGENTA << "RobotomyRequestForm anclarma" << RESET << std::endl;
	{
		Form		*form2 = new RobotomyRequestForm("anclarma");

		std::cout << "new form:\t" << *form2 << std::endl;
		kevin.executeForm(*form2);
		kevin.signForm(*form2);
		jean.signForm(*form2);
		isildur.signForm(*form2);
		kevin.executeForm(*form2);
		jean.executeForm(*form2);
		isildur.executeForm(*form2);
		delete form2;
	}
	std::cout << MAGENTA << "PresidentialPardonForm Xavier" << RESET << std::endl;
	{
		Form		*form3 = new PresidentialPardonForm("Xavier");

		std::cout << "new form:\t" << *form3 << std::endl;
		kevin.executeForm(*form3);
		kevin.signForm(*form3);
		jean.signForm(*form3);
		isildur.signForm(*form3);
		kevin.executeForm(*form3);
		jean.executeForm(*form3);
		isildur.executeForm(*form3);
		delete form3;
	}
	return (0);
}

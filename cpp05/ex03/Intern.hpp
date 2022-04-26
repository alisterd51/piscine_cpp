/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:40:57 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/19 09:56:22 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class	Intern
{
	public:
		Intern(void);
		Intern(Intern const &src);
		virtual	~Intern(void);

		Intern	&operator=(Intern const &rhs);

		Form	*makeForm(std::string const &formName, std::string const &target);
	protected:

	private:
		Form	*newShrubberyCreationForm(std::string const &target);
		Form	*newRobotomyRequestForm(std::string const &target);
		Form	*newPresidentialPardonForm(std::string const &target);
		std::string	_formName[3];
		Form*		(Intern::*_f[3])(std::string const &target);
};

#endif

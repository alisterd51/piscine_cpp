/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:38:38 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/09 00:10:07 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <exception>
# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	public:
		Form(void);
		Form(Form const &src);
		Form(std::string const &name,
				unsigned int const &rgs,
				unsigned int const &rge);
		virtual	~Form(void);

		Form	&operator=(Form const &rhs);

		Form	&beSigned(Bureaucrat const &bureaucrat);
		std::string const	&getName(void) const;
		bool				getIsSigned(void) const;
		unsigned int const	&getGradeSignature(void) const;
		unsigned int const	&getGradeExecution(void) const;
		void				setIsSigned(bool isSigned);
		virtual void	execute(Bureaucrat const & executor) const = 0;
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("grade too hight");
				}
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("grade too low");
				}
		};
		class	NotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("form is not signed");
				}
		};
		class	FailedOpenFileException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("failed to open file");
				}
		};
	protected:

	private:
		std::string const	_name;
		bool				_isSigned;
		unsigned int const	_requiredGradeSignature;
		unsigned int const	_requiredGradeExecution;
};

std::ostream	&operator<<(std::ostream &o, Form const &i);

#endif

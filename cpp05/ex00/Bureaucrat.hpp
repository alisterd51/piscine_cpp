/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 23:34:24 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/08 02:00:07 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include <iostream>
# include <string>

class	Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat(std::string const &name, unsigned int const &grade);
		virtual	~Bureaucrat(void);

		Bureaucrat	&operator=(Bureaucrat const &rhs);
		Bureaucrat	&operator++(void);
		Bureaucrat	operator++(int);
		Bureaucrat	&operator--(void);
		Bureaucrat	operator--(int);

		std::string const	getName(void) const;
		unsigned int		getGrade(void) const;
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
	protected:
		std::string const	_name;
		unsigned int		_grade;
	private:

};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &i);

#endif

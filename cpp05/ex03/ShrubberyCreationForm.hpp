/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:13:33 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/10 19:17:09 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		ShrubberyCreationForm(std::string const &target);
		virtual	~ShrubberyCreationForm(void);

		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &rhs);
		virtual void	execute(Bureaucrat const & executor) const;
		virtual Form	*clone(std::string const &target) const;
	protected:

	private:

};

#endif

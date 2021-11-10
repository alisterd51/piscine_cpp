/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 00:35:12 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/10 19:17:20 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class	RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		RobotomyRequestForm(std::string const &target);
		virtual	~RobotomyRequestForm(void);

		RobotomyRequestForm	&operator=(RobotomyRequestForm const &rhs);
		virtual void	execute(Bureaucrat const &executor) const;
		virtual Form	*clone(std::string const &target) const;
	protected:

	private:
		
};

#endif

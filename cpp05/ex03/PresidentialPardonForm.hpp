/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 01:27:12 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/10 19:17:31 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class	PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		PresidentialPardonForm(std::string const &target);
		virtual	~PresidentialPardonForm(void);

		PresidentialPardonForm	&operator=(PresidentialPardonForm const &rhs);
		virtual void	execute(Bureaucrat const &executor) const;
		virtual Form	*clone(std::string const &target) const;
	protected:

	private:
		
};

#endif

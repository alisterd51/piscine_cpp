/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 01:29:22 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/08 19:10:18 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	jean("jean", 50);
	std::cout
		<< "new bureaucrat:\t\t"
		<< jean
		<< std::endl;
	{
		Form		form("form_lv_1", 1, 1);
		std::cout
			<< "new form:\t\t"
			<< form
			<< std::endl;
		jean.signForm(form);
	}
	{
		Form		form("form_lv_100", 100, 100);
		std::cout
			<< "new form:\t\t"
			<< form
			<< std::endl;
		jean.signForm(form);
	}
	return (0);
}

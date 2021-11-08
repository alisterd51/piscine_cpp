/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 01:29:22 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/08 02:37:57 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	kevin("kevin", 0);
		std::cout
			<< kevin
			<< std::endl;
	}
	catch (std::exception& e)
	{
		std::cout
			<< e.what()
			<< std::endl;
	}
	try
	{
		Bureaucrat	kevin("kevin", 151);
		std::cout
			<< kevin
			<< std::endl;
	}
	catch (std::exception& e)
	{
		std::cout
			<< e.what()
			<< std::endl;
	}
	try
	{
		Bureaucrat	kevin("kevin", 10);
		std::cout
			<< "after construction:\t"
			<< kevin
			<< std::endl;
		std::cout
			<< "return of kevin++:\t"
			<< kevin++
			<< std::endl;
		std::cout
			<< "after kevin++:\t\t"
			<< kevin
			<< std::endl;
		std::cout
			<< "return of ++kevin:\t"
			<< ++kevin
			<< std::endl;
		std::cout
			<< "after ++kevin:\t\t"
			<< kevin
			<< std::endl;
		std::cout
			<< "return of kevin--:\t"
			<< kevin--
			<< std::endl;
		std::cout
			<< "after kevin--:\t\t"
			<< kevin
			<< std::endl;
		std::cout
			<< "return of --kevin:\t"
			<< --kevin
			<< std::endl;
		std::cout
			<< "after --kevin:\t\t"
			<< kevin
			<< std::endl;
	}
	catch (std::exception& e)
	{
		std::cout
			<< e.what()
			<< std::endl;
	}
	return (0);
}

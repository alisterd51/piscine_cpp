/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:33:36 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/09 00:18:24 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) :
	Form("shrubbery creation form", 145, 137)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) :
	Form("shrubbery creation form", 145, 137)
{
	(void)src;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm
	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	if (this != &rhs)
		this->setIsSigned(rhs.getIsSigned());
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeExecution())
		throw Form::GradeTooLowException();
	else if (this->getIsSigned() == false)
		throw Form::NotSignedException();
	else
	{
		std::ofstream	outfile;
		std::string		filename;

		filename = executor.getName();
		filename.append("_shrubbery");
		outfile.open(filename.c_str());
		if (outfile.is_open())
		{
			outfile
				<< " .. ........... .............  ........... . ..... ........ ......."
				<< std::endl
				<< "......  ....................%.... .... ..... .........%............"
				<< std::endl
				<< ".@@@ ........ @@.... @@@@  . ............................  *  ....."
				<< std::endl
				<< "....@@ ..... @ .... @ .............   ....... .....; .... *** ....."
				<< std::endl
				<< ".....\\@\\....@ .... @ ............................. #  .. *****  ..."
				<< std::endl
				<< " @@@.. @@@@@  @@@@@@___.. ....... ...%..... ...  {###}  *******"
				<< std::endl
				<< "....@-@..@ ..@......@@@\\...... %...... ....... <## ####>********"
				<< std::endl
				<< "  @@@@\\...@ @ ........\\@@@@ ..... ...... ....... {###}***********"
				<< std::endl
				<< "....%..@  @@ /@@@@@ . ....... ...............<###########> *******"
				<< std::endl
				<< "...... .@-@@@@ ...V......     .... %.......... {#######}******* ***"
				<< std::endl
				<< "...... .  @@ .. ..v.. .. . { } ............<###############>*******"
				<< std::endl
				<< "......... @@ .... ........ {^^,     .......   {## ######}***** ****"
				<< std::endl
				<< "..%..... @@ .. .%.... . .. (   `-;   ... <###################> ****"
				<< std::endl
				<< ". .... . @@ . .... .. _  .. `;;~~ ......... {#############}********"
				<< std::endl
				<< ".... ... @@ ... ..   /(______); .. ....<################  #####>***"
				<< std::endl
				<< ". .... ..@@@ ...... (         (  .........{##################}*****"
				<< std::endl
				<< "......... @@@  ....  |:------( )  .. <##########################>**"
				<< std::endl
				<< " @@@@ ....@@@  ... _// ...... \\\\ ...... {###   ##############}*****"
				<< std::endl
				<< "@@@@@@@  @@@@@ .. / /@@@@@@@@@ vv  <##############################>"
				<< std::endl
				<< "@@@@@@@ @@@@@@@ @@@@@@@@@@@@@@@@@@@ ..... @@@@@@  @@@@@@@  @@@@"
				<< std::endl
				<< "@@@@@@###@@@@@### @@@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
				<< std::endl
				<< "@@@@@@@@###@##@@ @@@@@@@@@@@@@@@@@@@@@ @@@@@   @@@@@@@@@@@@@@@@@@@"
				<< std::endl
				<< "@@@@@@@@@@@### @@@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@@@@@@@@"
				<< std::endl
				<< "-@@@@@@@@@#####@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
				<< std::endl;
		}
		else
			throw Form::FailedOpenFileException();
	}
	return ;
}

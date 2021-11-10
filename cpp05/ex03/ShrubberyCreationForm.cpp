/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:33:36 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/10 19:50:31 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) :
	Form("shrubbery creation", "anonymous", 145, 137)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) :
	Form(src.getName(), src.getTarget(), src.getGradeSignature(),
			src.getGradeExecution())
{
	this->setIsSigned(src.getIsSigned());
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
	Form("shrubbery creation", target, 145, 137)
{
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

		filename = this->getTarget();
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

Form    *ShrubberyCreationForm::clone(std::string const &target) const
{
	return (new ShrubberyCreationForm(target));
}

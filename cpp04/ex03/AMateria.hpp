/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:45:48 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/06 16:52:10 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"

class	AMateria
{
	public:
		AMateria(void);
		AMateria(AMateria const &src);
		AMateria(std::string const & type);
		virtual	~AMateria(void);

		AMateria	&operator=(AMateria const &rhs);

		std::string const	&getType() const; //Returns the materia type
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
	protected:

	private:
		
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:41:57 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/06 17:49:12 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <string>
# include "AMateria.hpp"

class	Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &src);
		Ice(std::string const &type);
		virtual	~Ice();

		Ice	&operator=(Ice const &rhs);

		std::string const	&getType() const; //Returns the materia type
		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);
	protected:

	private:
		
};

#endif

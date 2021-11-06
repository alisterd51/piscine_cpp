/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:41:57 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/06 17:51:08 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <string>
# include "AMateria.hpp"

class	Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const &src);
		Cure(std::string const &type);
		virtual	~Cure();

		Cure	&operator=(Cure const &rhs);

		std::string const	&getType() const; //Returns the materia type
		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);
	protected:

	private:
		
};

#endif

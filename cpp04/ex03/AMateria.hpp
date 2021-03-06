/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:17:13 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/17 16:35:17 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class	AMateria
{
	public:
		AMateria(void);
		AMateria(AMateria const &src);
		AMateria(std::string const &type);
		virtual	~AMateria(void);
		virtual AMateria	&operator=(AMateria const &rhs);
		std::string const	&getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void	use(ICharacter &target);
	protected:
		std::string	_type;
	private:
		
};

#endif

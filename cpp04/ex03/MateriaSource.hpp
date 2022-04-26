/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:02:46 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/17 16:37:49 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class	MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &src);
		virtual	~MateriaSource();

		MateriaSource	&operator=(MateriaSource const &rhs);

		virtual void	learnMateria(AMateria *newMateria);
		virtual AMateria*	createMateria(std::string const &type);
	protected:
		
	private:
		AMateria	*_materias[4];
};

#endif

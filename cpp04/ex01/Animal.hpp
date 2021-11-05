/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:04:05 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/04 23:56:04 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class	Animal
{
	public:
		Animal(void);
		Animal(Animal const &src);
		virtual	~Animal(void);

		Animal	&operator=(Animal const &rhs);

		virtual void		makeSound(void) const;
		virtual std::string	getType(void) const;
	protected:
		std::string	type;
	private:
		
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:54:01 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/04 23:54:42 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const &src);
		virtual	~Dog(void);

		Dog	&operator=(Dog const &rhs);

		virtual void	makeSound(void) const;
	protected:

	private:

};

#endif

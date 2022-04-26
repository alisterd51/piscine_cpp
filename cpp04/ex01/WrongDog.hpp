/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:54:01 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/05 00:41:16 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

#include "WrongAnimal.hpp"

class	WrongDog : public WrongAnimal
{
	public:
		WrongDog(void);
		WrongDog(WrongDog const &src);
		virtual	~WrongDog(void);

		WrongDog	&operator=(WrongDog const &rhs);

		void	makeSound(void) const;
	protected:

	private:

};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:55:20 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/05 00:02:42 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const &src);
		virtual	~Cat(void);

		Cat	&operator=(Cat const &rhs);

		virtual void	makeSound(void) const;
	protected:

	private:

};

#endif

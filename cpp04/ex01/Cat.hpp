/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:55:20 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/17 10:25:55 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const &src);
		virtual	~Cat(void);

		Cat	&operator=(Cat const &rhs);

		virtual void	makeSound(void) const;
		void	addIdea(std::string idea);
		void	printIdeas(void) const;
	protected:

	private:
		Brain			*_brain;
		unsigned int	_numberIdeas;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:54:01 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/17 10:53:30 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class	Dog : public AAnimal
{
	public:
		Dog(void);
		Dog(Dog const &src);
		virtual	~Dog(void);

		Dog	&operator=(Dog const &rhs);

		virtual void	makeSound(void) const;
		void			addIdea(std::string idea);
		void			printIdeas(void) const;
	private:
		Brain			*_brain;
		unsigned int	_numberIdeas;
};

#endif

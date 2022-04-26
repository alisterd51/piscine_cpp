/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:04:05 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/17 10:51:32 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# define BLACK		"\033[1;30m"
# define RED		"\033[1;31m"
# define GREEN		"\033[1;32m"
# define YELLOW		"\033[1;33m"
# define BLUE		"\033[1;34m"
# define MAGENTA	"\033[1;35m"
# define CYAN		"\033[1;36m"
# define WHITE		"\033[1;37m"
# define RESET		"\033[0m"

# include <iostream>
# include <string>

class	AAnimal
{
	public:
		AAnimal(void);
		AAnimal(AAnimal const &src);
		virtual	~AAnimal(void);

		AAnimal	&operator=(AAnimal const &rhs);

		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;
	protected:
		std::string	type;
	private:
		
};

#endif

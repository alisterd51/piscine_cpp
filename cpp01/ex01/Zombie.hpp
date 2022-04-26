/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:48:40 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/11 20:47:02 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class	Zombie
{
	public:
		Zombie(void);
		Zombie(Zombie const &src);
		virtual	~Zombie(void);

		Zombie	&operator=(Zombie const &rhs);

		void	announce(void);
		void	setName(std::string name);
	private:
		std::string	name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif


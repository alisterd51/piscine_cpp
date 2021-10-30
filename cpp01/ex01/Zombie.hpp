/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 18:54:59 by anclarma          #+#    #+#             */
/*   Updated: 2021/10/31 01:15:46 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class	Zombie
{
	public:
		Zombie(void);
		~Zombie(void);

		void	naming(std::string name);
		void	announce(void) const;
	private:
		std::string _name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:09:34 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/16 05:44:46 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(FragTrap const &src);
		FragTrap(std::string const &name);
		virtual	~FragTrap(void);

		FragTrap	&operator=(FragTrap const &rhs);

		void	attack(std::string const &target);
		void	highFivesGuys(void);
	protected:
		static unsigned int const	_defaultHitPoints = 100;
		static unsigned int const	_defaultEnergyPoints = 100;
		static unsigned int const	_defaultAttackDamage = 30;
};

#endif

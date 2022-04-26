/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:09:34 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/16 07:45:41 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(DiamondTrap const &src);
		DiamondTrap(std::string const &name);
		virtual	~DiamondTrap(void);

		DiamondTrap	&operator=(DiamondTrap const &rhs);

		void	whoAmI(void);
		using	ScavTrap::attack;
	private:
		std::string	_name;
		using	FragTrap::_defaultHitPoints;
		using	ScavTrap::_defaultEnergyPoints;
		using	FragTrap::_defaultAttackDamage;
};

#endif

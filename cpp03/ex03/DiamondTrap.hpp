/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:24:21 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/04 20:00:28 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <string>
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
	protected:
		std::string		_name;
};

#endif

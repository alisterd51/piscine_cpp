/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:51:45 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/07 17:18:10 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class	Character : public ICharacter
{
	public:
		Character(void);
		Character(Character const &src);
		Character(std::string const &name);
		virtual	~Character(void);

		Character	&operator=(Character const &rhs);

		virtual std::string const	&getName() const;
		virtual void	equip(AMateria *m);
		virtual void	unequip(int idx);
		virtual void	use(int idx, ICharacter &target);
	protected:
		std::string const	_name;
		AMateria			*_equipment[4];
	private:
		
};

#endif

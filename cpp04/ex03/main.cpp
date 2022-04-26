/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:17:46 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/17 18:32:30 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"

int main(void)
{
	{
		IMateriaSource	*src = new MateriaSource();

		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		{
			ICharacter* me = new Character("me");

			{
				me->equip(src->createMateria("ice"));
				me->equip(src->createMateria("cure"));
				me->equip(src->createMateria("cure"));
				me->equip(src->createMateria("cure"));
				me->equip(src->createMateria("ice"));
			}
			{
				me->unequip(2);
				me->unequip(3);
				me->unequip(-1);
				me->unequip(42);
			}
			{
				ICharacter* bob = new Character("bob");

				me->use(0, *bob);
				me->use(1, *bob);
				delete bob;
			}
			delete me;
		}
		{
			Character	ali = Character("ali");
			Character	sterd;

			{
				ali.equip(src->createMateria("ice"));
				ali.equip(src->createMateria("cure"));
				ali.equip(src->createMateria("cure"));
				ali.equip(src->createMateria("cure"));
				sterd.equip(src->createMateria("cure"));
			}
			{
				ali.unequip(2);
				ali.unequip(3);
			}
			{
				ali.use(0, sterd);
				ali.use(1, sterd);
				ali.use(2, sterd);
				sterd = ali;
				ali.use(0, sterd);
				ali.use(1, sterd);
			}
		}
		delete src;
	}
	{
		MateriaSource	*src1 = new MateriaSource();
		MateriaSource	*src2 = new MateriaSource();

		*src1 = *src2;
		delete src1;
		delete src2;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:14:09 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/06 20:56:44 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class	AMateria;
class	ICharacter;
class	IMateriaSource;

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria(std::string const &type);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

AMateria::AMateria(std::string const &type) :
	_type(type)
{
	return ;
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	//a completer
	(void)target;
	return ;
}

class Ice : public AMateria
{
	protected:

	public:
		Ice(void);

		virtual Ice* clone() const;
		virtual void use(ICharacter& target);
};

Ice::Ice(void) :
	AMateria("ice")
{
	return ;
}

Ice*	Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	//a completer
	(void)target;
	return ;
}

class Cure : public AMateria
{
	protected:

	public:
		Cure(void);

		virtual Cure* clone() const;
		virtual void use(ICharacter& target);
};

Cure::Cure(void) :
	AMateria("cure")
{
	return ;
}

Cure*	Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	//a completer
	(void)target;
	return ;
}

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter
{
	private:
		std::string const	_name;
		AMateria			*_equipment[4];
	public:
		Character(std::string const & name);
		virtual ~Character();
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

Character::Character(std::string const & name) :
	_name(name)
{
	int	id;

	id = 0;
	while (id < 4)
		this->_equipment[id++] = NULL;
	return ;
}

Character::~Character()
{
	return ;
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	int	id;

	id = 0;
	while (id < 4 && this->_equipment[id] != NULL)
		id++;
	if (id < 4)
		this->_equipment[id] = m;
}

void Character::unequip(int idx)
{
	if (idx < 4)
		this->_equipment[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && this->_equipment[idx] != NULL)
		this->_equipment[idx]->use(target);
}

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};

MateriaSource::MateriaSource(void)
{
	return ;
}

void MateriaSource::learnMateria(AMateria*)
{
	return ;//
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	(void)type;
	return (NULL);//
}

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}

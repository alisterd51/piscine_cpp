/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:14:09 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/07 00:23:49 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
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

		virtual	~AMateria(void);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

class Ice : public AMateria
{
	protected:

	public:
		Ice(void);
		virtual	~Ice(void);

		virtual Ice* clone() const;
		virtual void use(ICharacter& target);
};

class Cure : public AMateria
{
	protected:

	public:
		Cure(void);

		virtual Cure* clone() const;
		virtual void use(ICharacter& target);
};

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
		AMateria	*_materias[4];
	public:
		MateriaSource(void);
		virtual	~MateriaSource();
		virtual void learnMateria(AMateria *newMateria);
		virtual AMateria* createMateria(std::string const & type);
};

AMateria::AMateria(std::string const &type) :
	_type(type)
{
	return ;
}

AMateria::~AMateria(void)
{
	return ;
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout
		<< "* does nothing about "
		<< target.getName()
		<< " *"
		<< std::endl;
	return ;
}

Ice::Ice(void) :
	AMateria("ice")
{
	return ;
}

Ice::~Ice(void)
{
	return ;
}

Ice*	Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout
		<< "* shoots an ice bolt at "
		<< target.getName()
		<< " *"
		<< std::endl;
	return ;
}

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
	std::cout
		<< "* heals "
		<< target.getName()
		<< "'s wounds *"
		<< std::endl;
	return ;
}

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

MateriaSource::MateriaSource(void)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		this->_materias[i] = NULL;
		i++;
	}
	return ;
}

MateriaSource::~MateriaSource(void)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (this->_materias[i] != NULL)
		{
			delete this->_materias[i];
			this->_materias[i] = NULL;
		}
		i++;
	}
}

void MateriaSource::learnMateria(AMateria *newMateria)
{
	int	i;

	i = 0;
	while (i < 4 && this->_materias[i] != NULL)
		i++;
	if (i < 4)
		this->_materias[i] = newMateria;
	else
		delete newMateria;
	return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (this->_materias[i] != NULL
				&& type.compare(this->_materias[i]->getType()) == 0)
			return (this->_materias[i]);
		i++;
	}
	return (NULL);
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

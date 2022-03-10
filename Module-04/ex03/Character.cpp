#include "Character.hpp"

Character::Character( )
{
	this->name = "";
	for (int i = 0; i < 4; i++)
		slot[i] = NULL;
}

Character::Character( std::string name )
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		slot[i] = NULL;
}

Character::Character( Character const & src )
{
	this->name = src.name;
	for (int i = 0; i < 4; i++)
		if (this->slot[i])
			delete this->slot[i];
	for (int i = 0; i < 4; i++)
	{
		if (src.slot[i])
			this->slot[i] = src.slot[i]->clone();
		else
			this->slot[i] = NULL;
	}
	return;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->slot[i])
			delete this->slot[i];
}

Character & Character::operator=( Character const & rhs )
{
	this->name = rhs.name;
	for (int i = 0; i < 4; i++)
		if (this->slot[i])
			delete this->slot[i];
	for (int i = 0; i < 4; i++)
	{
		if (rhs.slot[i])
			this->slot[i] = rhs.slot[i]->clone();
		else
			this->slot[i] = NULL;
	}
	return *this;
}

std::string const & Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria* m)
{
	int	i = 0;
	while (i < 4 && this->slot[i])
		i++;
	if (i >= 0 && i <= 3)
		this->slot[i] = m;
	return;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		this->slot[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3 && this->slot[idx])
		this->slot[idx]->use(target);	
}
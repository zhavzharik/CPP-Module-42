#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
}

MateriaSource::MateriaSource( MateriaSource const & src )
{
	for (int i = 0; i < 4; i++)
		if (this->materias[i])
			delete this->materias[i];
	for (int i = 0; i < 4; i++)
	{
		if (src.materias[i])
			this->materias[i] = src.materias[i]->clone();
		else
			this->materias[i] = NULL;
	}
	return;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->materias[i])
			delete this->materias[i];
	return;
}

MateriaSource & MateriaSource::operator=( MateriaSource const & rhs )
{
	for (int i = 0; i < 4; i++)
		if (this->materias[i])
			delete this->materias[i];
	for (int i = 0; i < 4; i++)
	{
		if (rhs.materias[i])
			this->materias[i] = rhs.materias[i]->clone();
		else
			this->materias[i] = NULL;
	}
	return *this;
}

void MateriaSource::learnMateria( AMateria* m)
{
	int	i = 0;
	while (i < 4 && this->materias[i])
		i++;
	if (i >= 0 && i <= 3)
		this->materias[i] = m;
	return;
}

AMateria* MateriaSource::createMateria( std::string const & type )
{
	int	i = 0;
	while (i < 4 && this->materias[i])
	{
		if (this->materias[i]->getType() == type)
			return this->materias[i]->clone();
		i++;
	}
	return NULL;
}

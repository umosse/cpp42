/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:16:21 by umosse            #+#    #+#             */
/*   Updated: 2024/12/17 17:19:50 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	_index = 0;
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
	std::cout << "Default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		
	}
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* materia)
{
	if (!materia)
		return ;
	while (_materias[_index] != NULL && _index < 4)
		_index++;
	if (_materias[_index] == NULL)
	{
		_materias[_index] = materia;
		_index++;
	}
}

AMateria*	MateriaSource::createMateria(std::string const & materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] && _materias[i]->getType() == materia)
			return (_materias[i]->clone());
	}
	return (0);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		delete _materias[i];
		_materias[i] = NULL;
	}
	std::cout << "Default destructor called" << std::endl;
}

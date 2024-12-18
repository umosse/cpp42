/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:44:05 by umosse            #+#    #+#             */
/*   Updated: 2024/12/18 16:48:26 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	_index = 0;
	_floorIndex = 0;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < 40; i++)
		_floor[i] = NULL;
	std::cout << "Default constructor called" << std::endl;
}

Character::Character(std::string name)
{
	_name = name;
	_index = 0;
	_floorIndex = 0;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < 40; i++)
		_floor[i] = NULL;
	std::cout << _name << " default constructor called" << std::endl;
}

Character::Character(const Character &other)
{
	_name = other._name;
	_index = other._index;
	_floorIndex = other._floorIndex;
	for (int i = 0; i < 4; i++)
	{
		if (other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	for (int i = 0; i < 40; i++)
	{
		if (other._floor[i])
			_floor[i] = other._floor[i]->clone();
		else
			_floor[i] = NULL;
	}
	std::cout << "Copy constructor called" << std::endl;
}

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		_name = other._name;
		_index = other._index;
		_floorIndex = other._floorIndex;
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
			{
				delete _inventory[i];
				_inventory[i] = NULL;
			}
			if (other._inventory[i])
				_inventory[i] = other._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
		for (int i = 0; i < 40; i++)
		{
			if (_floor[i])
			{
				delete _floor[i];
				_floor[i] = NULL;
			}
			if (other._floor[i])
				_floor[i] = other._floor[i]->clone();
			else
				_floor[i] = NULL;
		}
	}
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

std::string	const &Character::getName()const
{
	return (_name);
}

void	Character::equip(AMateria *m)
{
	if (!m)
		return ;
	_index = 0;
	while (_inventory[_index] != NULL && _index < 4)
		_index++;
	if (_inventory[_index] == NULL)
	{
		_inventory[_index] = m;
		_index++;
	}
}

void	Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
		return ;
	if (_inventory[idx] != NULL && _floorIndex < 40)
	{
		_floor[_floorIndex] = _inventory[idx];
		_inventory[idx] = NULL;
		_floorIndex++;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx < 0)
		return ;
	if (_inventory[idx] == NULL)
		return ;
	_inventory[idx]->use(target);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
		{
			for (int y = 0; y < 40; y++)
			{
				if (_floor[y] == _inventory[i])
				{
					_floor[y] = NULL;
				}
			}
			delete _inventory[i];
			_inventory[i] = NULL;
		}
	}
	for (int i = 0; i < 40; i++)
	{
		if (_floor[i])
		{
			delete _floor[i];
			_floor[i] = NULL;
		}
	}
	std::cout << "Default destructor called" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:17:33 by umosse            #+#    #+#             */
/*   Updated: 2024/11/25 16:33:06 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << _name << " default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints--;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage" << std::endl;
	}
	else
		std::cout << "ScavTrap " << _name << " cannot perform more actions" << std::endl;
}

// void	ScavTrap::takeDamage(unsigned int amount)
// {
// 	if (_hitPoints > 0)
// 	{
// 		_energyPoints--;
// 		_hitPoints -= amount;
// 		std::cout << "ScavTrap " << _name << " takes " << amount << " points of damage" << std::endl;
// 	}
// 	else
// 		std::cout << "ScavTrap " << _name << " is already dead" << std::endl;
// }

// void	ScavTrap::beRepaired(unsigned int amount)
// {
// 	if (_energyPoints > 0 && _hitPoints > 0)
// 	{
// 		_energyPoints--;
// 		_hitPoints += amount;
// 		std::cout << "ScavTrap " << _name << " repairs itself for " << amount << " hitpoints" << std::endl;
// 	}
// 	else
// 		std::cout << "ScavTrap " << _name << " cannot perform more actions" << std::endl;
// }

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << _name << " default destructor called, he had " << _hitPoints << " hitpoints left and " << _energyPoints << " energy points left" << std::endl;
}

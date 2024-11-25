/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:17:20 by umosse            #+#    #+#             */
/*   Updated: 2024/11/12 16:37:39 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Contructor has been called" << std::endl;
}

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << _name << " has been created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie destructor has been called" << std::endl;
}

void	Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(const std::string& name)
{
	_name = name;
}

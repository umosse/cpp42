/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:03:49 by umosse            #+#    #+#             */
/*   Updated: 2024/11/25 16:30:49 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	std::string	clap = "Clap";
	std::string	trap = "Trap";
	std::string	chicken = "Chicken";
	std::string	child = "Child";
	std::string	child2 = "Child2";
	ClapTrap	Clap(clap);
	ClapTrap	Trap(trap);
	ClapTrap	Chicken(chicken);
	ScavTrap	Child(child);
	ScavTrap	Child2(child2);

	Clap.attack(trap);
	Trap.takeDamage(10);
	Trap.beRepaired(10);
	Trap.takeDamage(1);
	Trap.attack(clap);

	Clap.attack(chicken);
	Chicken.takeDamage(7);
	Chicken.beRepaired(5);
	Chicken.beRepaired(5);
	Clap.attack(chicken);
	Clap.attack(chicken);
	Clap.attack(chicken);
	Clap.attack(chicken);
	Clap.attack(chicken);
	Clap.attack(chicken);
	Clap.attack(chicken);
	Clap.attack(chicken);
	Clap.attack(chicken);

	Child.attack(child2);
	Child2.takeDamage(20);
	Child2.beRepaired(10);
	Child.guardGate();

	return (0);
}

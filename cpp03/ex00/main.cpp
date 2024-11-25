/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:03:49 by umosse            #+#    #+#             */
/*   Updated: 2024/11/25 15:33:04 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::string	clap = "Clap";
	std::string	trap = "Trap";
	std::string	chicken = "Chicken";
	ClapTrap	Clap(clap);
	ClapTrap	Trap(trap);
	ClapTrap	Chicken(chicken);

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
	return (0);
}

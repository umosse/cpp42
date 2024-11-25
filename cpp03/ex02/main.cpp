/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:03:49 by umosse            #+#    #+#             */
/*   Updated: 2024/11/25 17:12:35 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	std::string	clap = "Clap";
	std::string	trap = "Trap";
	std::string	chicken = "Chicken";
	std::string	scav = "Scav";
	std::string	scav2 = "Scav2";
	std::string	frag = "Frag";
	std::string	frag2 = "Frag2";
	ClapTrap	Clap(clap);
	ClapTrap	Trap(trap);
	ClapTrap	Chicken(chicken);
	ScavTrap	Scav(scav);
	ScavTrap	Scav2(scav2);
	FragTrap	Frag(frag);
	FragTrap	Frag2(frag2);

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

	Scav.attack(scav2);
	Scav2.takeDamage(20);
	Scav2.beRepaired(10);
	Scav.guardGate();

	Frag.attack(frag2);
	Frag2.takeDamage(30);
	Frag2.beRepaired(15);
	Frag.highFivesGuys();
	return (0);
}

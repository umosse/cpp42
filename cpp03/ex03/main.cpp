/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:03:49 by umosse            #+#    #+#             */
/*   Updated: 2024/11/26 16:58:29 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	std::string	diamond = "Diamond";
	DiamondTrap	Diamond(diamond);

	Diamond.attack("chicken");
	Diamond.takeDamage(10);
	Diamond.beRepaired(10);
	Diamond.whoAmI();
	Diamond.highFivesGuys();
	Diamond.guardGate();
	Diamond.takeDamage(100);
	Diamond.beRepaired(10);
	return (0);
}

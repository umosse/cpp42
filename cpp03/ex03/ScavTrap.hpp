/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:17:19 by umosse            #+#    #+#             */
/*   Updated: 2024/11/26 15:56:36 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
	public:
		ScavTrap();
		ScavTrap(std::string _name);
		ScavTrap(std::string name, int attackDamage, int energyPoints, int hitPoints);
		ScavTrap(const ScavTrap &other);
		~ScavTrap();
		ScavTrap&	operator=(const ScavTrap &other);
		void	attack(const std::string& target);
		void	guardGate();
	private:
};
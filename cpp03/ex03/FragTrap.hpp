/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:38:02 by umosse            #+#    #+#             */
/*   Updated: 2024/11/26 15:56:47 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string _name);
		FragTrap(std::string name, int attackDamage, int energyPoints, int hitPoints);
		FragTrap(const FragTrap &other);
		~FragTrap();
		FragTrap&	operator=(const FragTrap &other);
		void	highFivesGuys();
	private:
};
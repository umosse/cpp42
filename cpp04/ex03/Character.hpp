/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:42:29 by umosse            #+#    #+#             */
/*   Updated: 2024/12/17 16:43:37 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

#include <iostream>

class Character : public ICharacter{
	public:
		Character();
		Character(std::string _name);
		Character(const Character &other);
		~Character();
		Character&	operator=(const Character &other);
		std::string const & getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
	private:
		std::string	_name;
		std::size_t	_index;
		AMateria	*_inventory[4];
		std::size_t	_floorIndex;
		AMateria	*_floor[40];
};

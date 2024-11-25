/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:17:35 by umosse            #+#    #+#             */
/*   Updated: 2024/11/12 16:47:07 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	if (N < 0)
	{
		std::cerr << N << ": Wrong amount of zombies in input" << std::endl;
		return (NULL);
	}
	Zombie	*zombieHorde;
	zombieHorde = new Zombie[N]();
	for (int i = 0; i < N; i++)
	{
		zombieHorde[i].setName(name);
		zombieHorde[i].announce();
	}
	return (zombieHorde);
}

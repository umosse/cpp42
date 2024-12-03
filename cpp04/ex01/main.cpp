/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:39:47 by umosse            #+#    #+#             */
/*   Updated: 2024/12/03 18:14:27 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Animal	*animals[100];

	for (int i = 0; i < 50; i++)
		animals[i] = new Dog("woof");
	for (int i = 50; i < 100; i++)
		animals[i] = new Cat("meow");
	Dog	*dogptr = static_cast<Dog *>(animals[20]);
	dogptr->setIdea("Eliminer Volkan");
	Cat	*catptr = static_cast<Cat *>(animals[70]);
	catptr->setIdea("Eliminer Volkan 2, le retour");
	dogptr->printIdea();
	catptr->printIdea();
	
	Dog	*paindog = new Dog(*dogptr);

	paindog->setIdea("ff");
	paindog->printIdea();
	
	dogptr->printIdea();

	delete j;
	delete i;

	return 0;
}

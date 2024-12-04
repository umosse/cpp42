/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:39:47 by umosse            #+#    #+#             */
/*   Updated: 2024/12/04 14:28:43 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

int main()
{
	// const Animal animal = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Animal	*animals[100];

	for (int i = 0; i < 50; i++)
		animals[i] = new Dog("woof");
	for (int i = 50; i < 100; i++)
		animals[i] = new Cat("meow");
	Dog	*dogptr = static_cast<Dog *>(animals[20]);
	dogptr->setIdea("dogptridea");
	Cat	*catptr = static_cast<Cat *>(animals[70]);
	catptr->setIdea("catptridea");
	dogptr->printIdea();
	catptr->printIdea();

	Dog	*paindog = new Dog(*dogptr);
	Cat	*paincat = new Cat(*catptr);

	paindog->setIdea("paindogidea");
	paindog->printIdea();
	paincat->setIdea("paincatidea");
	paincat->printIdea();
	
	dogptr->printIdea();

	delete paindog;
	delete paincat;
	for (int i = 0; i < 100; i++)
		delete animals[i];
	delete j;
	delete i;

	return 0;
}

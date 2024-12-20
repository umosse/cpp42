/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:31:15 by umosse            #+#    #+#             */
/*   Updated: 2024/12/20 11:55:06 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

// int	main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	me->unequip(0);
// 	me->use(0, *bob);
// 	delete bob;
// 	delete me;
// 	delete src;
// 	return 0;
// }

int	main()
{

	IMateriaSource *source = new MateriaSource();
	source->learnMateria(new Ice());
	source->learnMateria(new Cure());

	IMateriaSource *secondarySource = new MateriaSource();
	secondarySource->learnMateria(new Ice());
	secondarySource->learnMateria(new Cure());

	ICharacter *cloud = new Character("Cloud");
	ICharacter *tifa = new Character("Tifa");

	AMateria *tmp;
	tmp = secondarySource->createMateria("ice");
	cloud->equip(tmp);
	tmp = secondarySource->createMateria("fire");
	cloud->equip(tmp);
	tmp = secondarySource->createMateria("cure");
	cloud->equip(tmp);
	tmp = secondarySource->createMateria("lightning");
	cloud->equip(tmp);

	for (int i = 0; i < 4; i++) {
		cloud->use(i, *tifa);
	}

	cloud->equip(tmp);

	cloud->use(-42, *tifa);
	cloud->use(42, *tifa);
	cloud->use(4, *tifa);

	ICharacter *cloudCopy = new Character(*dynamic_cast<Character *>(cloud));
	Character *c = new Character(*dynamic_cast<Character *>(cloud));
	Character copy;

	copy = *c;

	copy.unequip(0);
	copy.unequip('d');


	delete c;

	cloudCopy->use(0, *tifa);
	cloudCopy->use(1, *tifa);
	cloudCopy->unequip(0);

	cloud->unequip(0);
	cloud->use(0, *tifa);

	cloud->unequip(0);
	cloud->unequip(-42);
	cloud->unequip(42);
	cloud->unequip(4);

	cloud->use(0, *tifa);

	delete cloud;
	delete cloudCopy;
	delete source;
	delete secondarySource;
	delete tifa;

	return 0;
}

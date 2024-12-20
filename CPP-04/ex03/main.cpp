/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:37:33 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/25 15:51:18 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter *me = new Character("me");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	// me->unequip(1);
	ICharacter *bob = new Character("bob");
	ICharacter *Hitchman = new Character("Hitchaman");
	ICharacter *b = new Character("ben");
	ICharacter *bo = new Character("bo");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(1, *Hitchman);
	me->use(1, *b);
	me->use(0, *bo);
	delete bob;
	delete Hitchman;
	delete b;
	delete bo;
	delete me;
	delete src;
	return 0;
}

// int main()
// {
// 	ft_main();
// 	system("leaks Program_03");
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:13:28 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/25 11:29:24 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"


int main()
{
	// Animal test;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	j->makeSound();
	i->makeSound();
	delete j;//should not create a leak
	delete i;
	std::cout << "\\\n\\\n\\\n\\\n\\\n";
	
	const Animal *f[8];

	for (int i = 0; i < 8 ; i++)
	{
		if (i < 5)
			f[i] = new Cat;
		else
			f[i] = new Dog;						
	}
	
	std::cout << "\\\n\\\n\\\n\\\n\\\n";
	std::cout << "===================== Deleting =================\n";
	for (int i = 0; i < 8; i++)
		delete f[i];
 	return 0;
}

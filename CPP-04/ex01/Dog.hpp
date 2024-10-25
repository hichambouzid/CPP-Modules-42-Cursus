/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:29:08 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/24 23:36:22 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	Brain* Brain_Dog;
	public:
	Dog();
	Dog(std::string name);
	Dog(const Dog& copy_dog);
	Dog & operator=(const Dog & copy_dog);
	void makeSound() const;
	~Dog();
};

#endif
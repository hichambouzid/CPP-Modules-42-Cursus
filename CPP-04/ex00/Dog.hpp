/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:29:08 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/25 15:13:37 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
	public:
	Dog();
	Dog(std::string name);
	Dog(const Dog& copy_dog);
	Dog & operator=(const Dog & copy_dog);
	void makeSound() const;
	~Dog();
};

#endif

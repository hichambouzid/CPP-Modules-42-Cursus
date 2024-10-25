/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:22:09 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/25 11:08:25 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called\n";
}

Brain::Brain(const Brain& copy_brain)
{
	std::cout << "Copy constructor called\n";
	*this = copy_brain;
}

const std::string & Brain::getNAme(int index) const
{
	return (this->ideas[index]);
}

void Brain::setNAme(int index, std::string array)
{
	this->ideas[index] = array;
}

Brain& Brain::operator=(const Brain& copy_brain)
{
	std::cout << "Copy assignment operator Brain  called\n";
	if (this != &copy_brain)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy_brain.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Destructor of brain was called\n";
}

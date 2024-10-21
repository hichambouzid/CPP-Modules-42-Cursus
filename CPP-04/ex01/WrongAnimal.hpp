/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:37:48 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/21 18:57:36 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
class WrongAnimal
{	
	protected:
		std::string type;
	public:
	 	WrongAnimal();
	 	WrongAnimal(std::string name);
	 	WrongAnimal(const WrongAnimal& copy_Animal);
		void makeSound() const;
		std::string getType() const;
	 	~WrongAnimal();
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:30:29 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/22 16:06:21 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include "Brain.hpp"
	
class Cat : public Animal{
	Brain* Brain_cat;
	public:
		Cat();
		Cat(std::string name);
		Cat(const Cat& copy_Cat);
		void makeSound() const;
		~Cat();

};

#endif
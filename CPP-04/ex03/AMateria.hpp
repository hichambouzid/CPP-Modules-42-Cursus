/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:29:42 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/22 18:38:46 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMARERIA_HPP

#include "ICharacter.hpp"
#include <iostream>

class AMateria
{
	protected:
		std::string const *type;
	public:
	AMateria(std::string const &type);
	
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

};

#endif
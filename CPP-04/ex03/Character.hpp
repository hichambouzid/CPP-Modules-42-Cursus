/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 02:02:03 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/23 21:08:11 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
// #include "AMateria.hpp"


class Character: public ICharacter
{
	protected:
	std::string name;
	AMateria *m[4];
	AMateria *save[100];
	public:
	Character(std::string name);
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

};

#endif

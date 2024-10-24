/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 02:02:03 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/24 15:19:52 by hibouzid         ###   ########.fr       */
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
	AMateria *m[4];
	AMateria *save[100];
	int index;
	protected:
	std::string name;
	public:
	Character(std::string name);
	Character & operator=(Character const &Character);
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	~Character();
};

#endif

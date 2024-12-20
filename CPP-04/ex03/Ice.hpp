/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:11:28 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/25 17:15:01 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "Character.hpp"

#include "AMateria.hpp"

class Ice: public AMateria{
	public:
		Ice();
		Ice(const Ice &copy_Ice);
		Ice & operator=(const Ice &copy_Ice);
		Ice *clone() const;
		void use(ICharacter &target);
		~Ice();
};

#endif

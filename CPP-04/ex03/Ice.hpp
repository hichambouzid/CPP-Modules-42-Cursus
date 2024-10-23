/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:11:28 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/23 18:27:43 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "Character.hpp"

#include "AMateria.hpp"

class Ice: public AMateria{
	public:
		Ice();
		Ice* clone() const;
		~Ice();
};

#endif
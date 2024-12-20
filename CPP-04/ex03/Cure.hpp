/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:12:33 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/25 17:07:57 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
class Cure: public AMateria
{
	public:
		Cure();
		Cure(const Cure & copy_cuer);
		Cure & operator=(const Cure & copy_cuer);
		Cure* clone() const;
		void use(ICharacter &target);
		~Cure();
};

#endif

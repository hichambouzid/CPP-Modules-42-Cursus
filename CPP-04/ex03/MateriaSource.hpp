/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:23:16 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/25 17:16:49 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
// #include "AMateria.hpp"

class MateriaSource: public IMateriaSource {
	AMateria *array_Materia[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource & copy_materai);
		MateriaSource & operator=(const MateriaSource & copy_materai);
		bool cmp_address(void *m);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
		~MateriaSource();
};

#endif

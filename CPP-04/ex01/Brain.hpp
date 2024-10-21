/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:09:48 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/21 23:48:11 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
	public:
		std::string ideas[100];
		Brain();
		Brain(const Brain& copy_brain);
		Brain& operator=(const Brain& copy_brain);
		~Brain();
};
#endif
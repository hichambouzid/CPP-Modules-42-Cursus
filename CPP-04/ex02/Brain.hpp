/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:09:48 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/25 11:07:30 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain& copy_brain);
		const std::string & getNAme(int index) const;
		void setNAme(int index, std::string array);
		Brain& operator=(const Brain& copy_brain);
		~Brain();
};
#endif
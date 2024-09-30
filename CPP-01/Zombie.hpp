/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:48:01 by hibouzid          #+#    #+#             */
/*   Updated: 2024/09/30 16:44:24 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
private:
	std::string name;
public:
	Zombie(std::string name);
	~Zombie(void);
	void announce (void) ;
	static Zombie* newZombie( std::string name );
	void randomChump( std::string name );
	
};
#endif
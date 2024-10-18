/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 21:40:59 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/18 16:53:07 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class  ClapTrap{
	protected:
	std::string Name;
	int Hit_Points;
	int Enrgy_Points;
	int Attak_Damage;
	public:
	ClapTrap();
	ClapTrap(std::string Name);
	ClapTrap(const ClapTrap &copy_clap);
	ClapTrap& operator=(const ClapTrap &copy_clap);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
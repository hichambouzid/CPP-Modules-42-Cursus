/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:45:24 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/19 15:46:35 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
	public:
		FragTrap();
		FragTrap(const std::string name);
		FragTrap(const FragTrap &copy_frag);
		void highFivesGuys(void);
		~FragTrap();
};
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:03:11 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/05 16:16:53 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Collector.hpp"

void find_substr(std::string *name, std::string s1, std::string s2)
{
	std::string tmp1;
	std::size_t pos1;

	while (1)
	{
		pos1 = name->find(s1);
		if (pos1  == std::string::npos)
			break;
		// if (pos1)
		// 	pos1 -= 1;
		tmp1 = name->substr(0, pos1);
		tmp1 += s2;
		tmp1 += name->substr(pos1 + s1.length());
		*name = tmp1;
	}
}
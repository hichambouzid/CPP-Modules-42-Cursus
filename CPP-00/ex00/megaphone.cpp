/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:01:22 by hibouzid          #+#    #+#             */
/*   Updated: 2024/09/12 18:48:53 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (1);
	}
	for (int j = 1; j < ac; j++)
	{
		for (int i = 0; av[j][i]; i++)
		{
			std::cout << static_cast<unsigned char>(std::toupper((av[j][i])));
		}
		if (j != ac - 1)
			std::cout << ' ';
	}
	std::cout << '\n';
}
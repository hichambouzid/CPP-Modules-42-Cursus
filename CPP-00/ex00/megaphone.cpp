/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:01:22 by hibouzid          #+#    #+#             */
/*   Updated: 2024/09/11 00:02:34 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// #include <standar>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (1);
	}
	for (int j = 1; j < ac; j++)
		for (int i = 0; av[j][i]; i++)
			putchar(toupper(av[j][i]));
	std::cout << '\n';
}
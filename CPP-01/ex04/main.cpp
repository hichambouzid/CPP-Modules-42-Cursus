/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 16:15:52 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/05 16:16:26 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>
#include "Collector.hpp"


int first_parcing(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Invalide number of argument\n";
			return (0);
	}
	else if (std::string(av[1]).empty() || std::string(av[2]).empty()
		|| std::string(av[3]).empty())
	{	
		std::cout << "Invalide Argument\n";
		return (0);
	}
	return (1);
		
}

int main(int ac, char **av)
{
	std::string		new_file;
	std::string		line;

	if (!first_parcing(ac, av))
		return (-1);
	std::fstream inFile((std::string(av[1])));
	if (!inFile)
	{
		std::cerr << "Error opening a FILE for reading\n";
		return (-1);
	}
	new_file = std::string(av[1]) + ".replace";
	std::ofstream ouTfile(new_file);
	if (!ouTfile)
		std::cerr << "Error opening file for writing \n";
	std::getline(inFile, line);
	while (1)
	{
		find_substr(&line, std::string(av[2]), std::string(av[3]));
		ouTfile << line;
		if(!std::getline(inFile, line))
			break ;				
		ouTfile << std::endl;
		 	
	}
	ouTfile.close();
	inFile.close();
}
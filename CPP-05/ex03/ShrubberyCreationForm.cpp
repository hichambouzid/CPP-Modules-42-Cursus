/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:44:59 by hibouzid          #+#    #+#             */
/*   Updated: 2024/11/02 17:27:16 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137), target(target)
{
	// this->Shrubbery_File(this->target + std::string("_shrubbery"));
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
	try
	{
		if (this->getPermessiom() == false || executor.getGrade() > this->getRExecute())
		{
			throw ExceptionAForm(this->GradeTooLowException());
		}
	
		else
		{
				std::ofstream outFile(target + std::string("_shrubbery"));
				if (!outFile)
				{
					std::cerr << "cann't open a file to draw a shrubbery.\n";
					return ;
				}
				outFile << "	                                                        .\n";
    			outFile << "                                          .         ;  \n";
    			outFile << "             .              .              ;%     ;;   \n";
    			outFile << "               ,           ,                :;%  %;   \n";
    			outFile << "                :         ;                   :;%;'     .,   \n";
    			outFile << "       ,.        %;     %;            ;        %;'    ,;\n";
    			outFile << "         ;       ;%;  %%;        ,     %;    ;%;    ,%'\n";
    			outFile << "          %;       %;%;      ,  ;       %;  ;%;   ,%;' \n";
    			outFile << "           ;%;      %;        ;%;        % ;%;  ,%;'\n";
    			outFile << "            `%;.     ;%;     %;'         `;%%;.%;'\n";
    			outFile << "             `:;%.    ;%%. %@;        %; ;@%;%'\n";
    			outFile << "                `:%;.  :;bd%;          %;@%;'\n";
    			outFile << "                  `@%:.  :;%.         ;@@%;'   \n";
    			outFile << "                    `@%.  `;@%.      ;@@%;         \n";
    			outFile << "                      `@%%. `@%%    ;@@%;        \n";
    			outFile << "                        ;@%. :@%%  %@@%;       \n";
    			outFile << "                          %@bd%%%bd%%:;     \n";
    			outFile << "                            #@%%%%%:;;\n";
    			outFile << "                            %@@%%%::;\n";
    			outFile << "                            %@@@%(o);  . '         \n";
    			outFile << "                            %@@@o%;:(.,'         \n";
    			outFile << "                        `.. %@@@o%::;         \n";
    			outFile << "                           `)@@@o%::;         \n";
    			outFile << "                            %@@(o)::;        \n";
    			outFile << "                           .%@@@@%::;         \n";
    			outFile << "                           ;%@@@@%::;.          \n";
    			outFile << "                          ;%@@@@%%:;;;. \n";
    			outFile << "                      ...;%@@@@@%%:;;;;,..   \n";
				outFile.close();
		}
	}
	catch (const  ExceptionAForm &e)
	{
		std::cerr << e.what() ;
	}
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}
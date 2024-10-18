/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:51:05 by glaguyon          #+#    #+#             */
/*   Updated: 2024/10/18 18:20:26 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>

#define USER std::string("glaguyon")

//TODO find username
//TODO find date
static void	header42(std::ofstream &out, std::string &filename)
{
	out	 <<	"/* ************************************************************************** */\n"
		<<	"/*                                                                            */\n"
		<<	"/*                                                        :::      ::::::::   */\n"
		<<	"/*   " << std::left << std::setw(41) << filename.substr(0, 41) << "          :+:      :+:    :+:   */\n"
		<<	"/*                                                    +:+ +:+         +:+     */\n"
		<<	"/*   By: " << std::left << std::setw(18) << USER.substr(0, 18) << " <skibidi@ohio.sus>      +#+  +:+       +#+        */\n"
		<<	"/*                                                +#+#+#+#+#+   +#+           */\n"
		<<	"/*   Created: 1833/02/30 06:67:85 by " << std::left << std::setw(9) << USER.substr(0, 9) << "         #+#    #+#             */\n"
		<<	"/*   Updated: 1833/02/30 06:67:85 by " << std::left << std::setw(9) << USER.substr(0, 9) << "        ###   ########.fr       */\n"
		<<	"/*                                                                            */\n"
		<<	"/* ************************************************************************** */\n";
}

void	createClassHeader(std::string includes, std::string name)
{
	std::string	filename = includes + "/" + name + ".hpp";
	std::ofstream	header(filename);

	if (!header)
	{
		std::cerr << "Cannot create header\n";
		return ;
	}
	header42(header, filename);
	//ifnderf define
	header.close();
}

int	main(int argc, char **argv)
{
	std::string	name = "Class";
	std::string	src = "src";
	std::string	includes = "includes";

	if (argc == 1)
	{
		std::cout << "./class [class name] (src dir) (includes dir)\n";
		return 0;
	}
	if (argc >= 2)
		name = argv[1];
	if (argc >= 3)
		src = argv[2];
	if (argc >= 4)
		includes = argv[3];
	createClassHeader(includes, name);
	//createClassSrc();
}

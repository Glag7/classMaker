/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glag <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:56:00 by glag              #+#    #+#             */
/*   Updated: 2024/10/22 20:30:25 by glag             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include "utils.h"

void	createClassSource(std::string src, std::string name)
{
	std::string	filename = name + ".cpp";
	std::string	path = src + "/" + filename;
	std::ofstream	source(path);
	char		varName = (char)std::tolower(name[0]);

	if (!source)
	{
		std::cerr << "Cannot create source\n";
		return ;
	}
	header42(source, filename);
	source	<< "#include <iostream>\n"
		<< "#include \"" << name + ".hpp" << "\"\n\n"
		<< name << "::" << name << "()\n{\n\tstd::cout << \"hello\\n\";\n}\n\n"
		<< name << "::" << name << "(const &" << varName << ")\n{\n" 
		<< "\t*this = " << varName << ";\n"
		<< "\tstd::cout << \"hello hello\\n\";\n}\n\n"
		<< name << " &" << name << "::operator=(" << name << " const &" << varName << ")\n{\n"
		<< "\tstd::cout << \"hello = hello\\n\";\n\treturn *this;\n}\n\n"
		<< name << "::~" << name << "()\n{\n"
		<< "\tstd::cout << \"bye bye\\n\";\n}\n";
}

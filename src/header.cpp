/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glag <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:37:55 by glag              #+#    #+#             */
/*   Updated: 2024/10/22 19:48:31 by glag             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include "utils.h"

static std::string	strUpper(std::string s)
{
	for (std::string::iterator it = s.begin(); it < s.end(); ++it)
		*it = std::toupper(*it);
	return s;
}

void	createClassHeader(std::string includes, std::string name)
{
	std::string	filename = name + ".hpp";
	std::string	headerProt = strUpper(name) + "_HPP";
	std::string	path = includes + "/" + filename;
	std::ofstream	header(path);

	if (!header)
	{
		std::cerr << "Cannot create header\n";
		return ;
	}
	header42(header, filename);
	header	<< "#ifndef " << headerProt << "\n"
		<< "# define " << headerProt << "\n\n"
		<< "class " << name << "\n"
		<< "{\n\tpublic:\n"
		<< "\t" << name << "();\n"
		<< "\t" << name << "(" << name << " const &" << (char)std::tolower(name[0]) << ");\n"
		<< "\t" << name << " &operator=(" << name << " const &" << (char)std::tolower(name[0]) << ");\n"
		<< "\t~" << name << "();\n"
		<< "};\n\n"
		<< "#endif // " << headerProt << "\n";
	header.close();
}


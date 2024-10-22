/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:51:05 by glaguyon          #+#    #+#             */
/*   Updated: 2024/10/22 19:42:25 by glag             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "utils.h"

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

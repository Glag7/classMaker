/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header42.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glag <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:40:19 by glag              #+#    #+#             */
/*   Updated: 2024/10/22 19:49:30 by glag             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>

#define USER std::string("glaguyon")

//TODO find username
//TODO find date
void	header42(std::ofstream &out, std::string &filename)
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
		<<	"/* ************************************************************************** */\n\n";
}

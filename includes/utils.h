/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glag <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:39:17 by glag              #+#    #+#             */
/*   Updated: 2024/10/22 19:58:10 by glag             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

#include <string>

void	header42(std::ofstream &out, std::string &filename);
void	createClassHeader(std::string includes, std::string name);
void	createClassSource(std::string src, std::string name);

#endif

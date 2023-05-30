/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkilic <hkilic@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 19:12:26 by hkilic            #+#    #+#             */
/*   Updated: 2023/04/02 19:12:47 by hkilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact
{
public:
	int			index;
	std::string	fName;
	std::string	lName;
	std::string	nName;
	std::string	pNumber;
	std::string	secret;
};

#endif
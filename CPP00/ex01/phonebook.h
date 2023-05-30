/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkilic <hkilic@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 19:12:44 by hkilic            #+#    #+#             */
/*   Updated: 2023/04/02 19:12:44 by hkilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "contact.h"
#include <iomanip>

class Phonebook
{
public:
	Contact	persons[8];
	int		last;
	int		idx;
	void	add();
	void	search();
	void	print_index(int i);
};

#endif
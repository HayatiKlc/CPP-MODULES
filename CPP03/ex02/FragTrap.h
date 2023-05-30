/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkilic <hkilic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:53:25 by hkilic            #+#    #+#             */
/*   Updated: 2023/05/09 14:53:25 by hkilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_H
# define FLAGTRAP_H

#include "ClapTrap.h"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string _name, int _hpoints, int _epoints, int damage);
	FragTrap(const FragTrap &cpy);
	FragTrap &operator=(const FragTrap &src);
	void highFivesGuys(void);
	~FragTrap();
};


#endif
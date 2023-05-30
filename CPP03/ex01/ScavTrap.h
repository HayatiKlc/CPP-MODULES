/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkilic <hkilic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:53:08 by hkilic            #+#    #+#             */
/*   Updated: 2023/05/09 14:53:09 by hkilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string _name, int _hp, int _energy, int _damage);
	~ScavTrap();
	ScavTrap(ScavTrap const &cpy);
	ScavTrap &operator=(const ScavTrap &src);
	void guardGate();
};
#endif
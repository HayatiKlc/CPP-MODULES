/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkilic <hkilic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:52:57 by hkilic            #+#    #+#             */
/*   Updated: 2023/05/09 14:52:57 by hkilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

int	main()
{
	ScavTrap	a;
	ScavTrap	b(a);
	std::cout << a;
	a.takeDamage(90);
	a.beRepaired(40);
	a.attack("erdoggy");
	a.guardGate();
	a.takeDamage(30);
}
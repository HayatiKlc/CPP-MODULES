/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkilic <hkilic@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 19:12:33 by hkilic            #+#    #+#             */
/*   Updated: 2023/04/02 19:12:34 by hkilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.h"

int main()
{
    Phonebook   phbook;
    std::string comm;

    phbook.idx = 0;
    phbook.last = 0;
    while(1)
    {
    std::cout << "Select a commad (ADD | SEARCH | EXIT)" << std::endl;
    std::cin >> comm;
    if(comm == "ADD")
        phbook.add();
    else if(comm == "SEARCH")
        phbook.search();
    else if(comm == "EXIT")
        break;
    else
        std::cout << "WRONG ENTRY" << std::endl;
    }
}
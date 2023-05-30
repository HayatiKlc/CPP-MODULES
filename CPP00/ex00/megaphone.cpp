/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkilic <hkilic@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 19:12:54 by hkilic            #+#    #+#             */
/*   Updated: 2023/04/02 19:12:55 by hkilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv) {
    if (argc > 1) {
        int i = 1;
        while (i < argc) {
            std::string message = argv[i];
            size_t j = 0;
            while (j < message.length()) {
                std::cout << (char)std::toupper(message[j]);
                j++;
            }
            i++;
        }
        std::cout << std::endl;
    } else {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    return 0;
}

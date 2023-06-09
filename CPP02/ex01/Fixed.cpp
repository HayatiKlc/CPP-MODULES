/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkilic <hkilic@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:17:52 by hkilic            #+#    #+#             */
/*   Updated: 2023/05/09 12:17:53 by hkilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed() {
	this->fixedPointValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int number) {
	std::cout << "Int constructor called" << std::endl;
	this->fixedPointValue = number << this->bits;
}

Fixed::Fixed(const float fnumber) {
	std::cout << "Float constructor called" << std::endl;
	this->fixedPointValue = (int)(roundf(fnumber * (1 << this->bits)));
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &src) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixedPointValue = src.getRawBits();
	return (*this);
}

float	Fixed::toFloat(void) const {
	return (fixedPointValue / (float)(1 << bits));
}

int		Fixed::toInt(void) const {
	return (fixedPointValue >> bits);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPointValue);
}

void Fixed::setRawBits(int const raw) {
	this->fixedPointValue = raw;
}

std::ostream	&operator<<(std::ostream &os, const Fixed &f) {
	os << f.toFloat();
	return os;
}
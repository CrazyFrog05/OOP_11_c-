#pragma once
#ifndef PLANTS_HPP
#define PLANTS_HPP

#include <string>
#include <iostream>
#include "ServiceMacro.h"
#include "ClassPlod.hpp"

class Plants {
public:
	Plants(const std::string& color, const std::string& size, const std::string& name)
		: color_(color), size_(size), name_(name){}

	virtual ~Plants() {}

	virtual void printInfo() const {
		std::cout << " Name:  " << name_ << std::endl;
		std::cout << " Color: " << color_ << std::endl;
		std::cout << " Size:  " << size_ << std::endl;
	}

	virtual Plod* plodFruit() = 0;

	GENERATE_ACCESSOR_GET_FIELD(std::string, color_, Color);
	GENERATE_ACCESSOR_GET_FIELD(std::string, size_, Size);
	GENERATE_ACCESSOR_GET_FIELD(std::string, name_, Name);
};



#endif // !1
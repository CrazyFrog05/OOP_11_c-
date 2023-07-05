#ifndef CLASS_PLOD_HPP
#define CLASS_PLOD_HPP

#include <string>
#include <iostream>
#include "ServiceMacro.h"

// 
class Plod {
public:
	Plod(const std::string& name, const std::string& color, const std::string& size, double  weight)
		: name_(name), color_(color), size_(size), weight_(weight){}

	virtual ~Plod(){}

	virtual void printInfo()const {
		std::cout << "Name:   " << name_ << std::endl;
		std::cout << "Color:  " << color_ << std::endl;
		std::cout << "Size:   " << size_ << std::endl;
		std::cout << "Weight: " << weight_ << std::endl;
	}

private:
	std::string name_;
public:
	std::string getName() const {
		return name_;
	};

	GENERATE_ACCESSOR_GET_FIELD(std::string, color_, Color);
	GENERATE_ACCESSOR_GET_FIELD(std::string, size_, Size);
	GENERATE_ACCESSOR_GET_FIELD(double, weight_, Weight);
};





#endif // !CLASS_PLOD_HPP

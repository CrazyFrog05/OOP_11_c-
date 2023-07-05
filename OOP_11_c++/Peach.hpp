#ifndef PEACH_HPP
#define PEACH_HPP

#include <string>
#include "ClassPlod.hpp"

class Peach : public Plod {
public:
	Peach(const std::string& color = "Orange", const std::string& size = "Large", double weight = 0.15)
		: Plod("Peach", color, size, weight){}
};


#endif // !1

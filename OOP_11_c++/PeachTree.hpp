#ifndef PEACH_TREE_HPP
#define PEACH_TREE_HPP

#include <iostream>
#include <string>
#include "Plants.hpp"
#include "Peach.hpp"

class PeachTree : public Plants {
private:
	int fruitCount; // Кол-во плодов 
public:
	PeachTree(const std::string& color, const std::string& size, const std::string& name, int fruitCount)
		: Plants(color, size, name), fruitCount(fruitCount) {}

	void printInfo() const override {
		Plants::printInfo();
		std::cout << "Fruit count: " << fruitCount << std::endl;
	}

	Plod* plodFruit() override {
		--fruitCount;
		return new Peach("Yellow", "Big", 0.25);
	}
};



#endif // !1

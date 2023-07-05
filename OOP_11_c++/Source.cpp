#include <iostream>
#include"PeachTree.hpp"


int main() {
	PeachTree tree("Orange-green", "Bigest", "Peach Tree", 15);
	tree.printInfo();

	Plod* peach = tree.plodFruit();
	peach->printInfo();

	delete peach;

	return 0;
}
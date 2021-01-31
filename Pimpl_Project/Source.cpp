#include <iostream>
#include "pimpl.h"

int main()
{
	Pimple e1("John", "E007");
	Pimple e2("Sam", "E008");

	std::cout << e1.getName() << ':' << e1.getId() << '\n';
	e1.setName("Spartan");
	std::cout << e1.getName() << '\n';
	std::cout << e2.getName() << ':' << e2.getId() << '\n';

	std::cin.get();
}
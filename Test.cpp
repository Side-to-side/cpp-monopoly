#include "Test.h"

void Test::tests() {
	test0();
	test1();
	test2();
}

void Test::test0() {
	std::cout << "Test 0:\n";
	std::cout << "the program should output 'Hello Monopoly'\n\n";
	std::cout << "output:\n";
	std::cout << "Hello Monopoly";
	std::cout << std::endl;
	std::cout << "--------------------------------\n";
}

void Test::test1() {
	std::cout << "Test 1:\n";
	std::cout << "check class constructor AI, ";
	std::cout << "the output should be\nname: Andrey\nid: 0\n\noutput\n";
	AI a("Andrey",0);
	std::cout << "name: " << a.namePlayer << std::endl;
	std::cout << "id: " << a.ID << std::endl;
	std::cout << "--------------------------------\n";
}

void Test::test2() {
	std::cout << "Test 2:\n";
	std::cout << "check class constructor Field, ";
	std::cout << "the output should be\nid: 3\ncost: 4000\n\noutput\n";
	Field f(3,4000);
	std::cout << "id: " << f.ID << std::endl;
	std::cout << "cost: " << f.fieldCost << std::endl;
	std::cout << "--------------------------------\n";
}

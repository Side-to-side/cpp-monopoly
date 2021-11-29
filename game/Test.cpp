#include "Test.h"

void Test::tests() {
	test1();
	test2();
	test3();
  test4();
}

void Test::test1() {
	std::cout << "Test 1:\n";
	std::cout << "check class constructor AI, ";
	std::cout << "the output should be\nname: Andrey\nid: 0\n\noutput\n";
	Bot a("Andrey",0);
	std::cout << "name: " << a.getName() << std::endl;
	std::cout << "id: " << a.getID() << std::endl;
	std::cout << "--------------------------------\n";
}

void Test::test2() {
	std::cout << "Test 2:\n";
	std::cout << "checking the loading of the playing field\n\n";
	std::vector<std::unique_ptr<Field>> test_map;
  test_map = fieldCreation();
  for(int i = 0;i < test_map.size();i++){
    test_map[i]->info();
    std::cout << test_map[i]->getID() << " " << std::endl;
  }
	std::cout << "--------------------------------\n";
}

void Test::test3() {
	std::cout << "Test 3: \n";
	std::cout << "check the Dice \n\n";
	std::cout << "Value from 1 to 6 \n";
	Dice first, second;
	first.randValue();
	second.randValue();
	std::cout << first.getValue() << "\n\n";
	std::cout << second.getValue() << "\n\n";
	std::cout << "--------------------------------\n";
}

void Test::test4() {
	std::cout << "Test 4:\n";
	std::cout << "check class constructor BasicField, ";
	std::cout << "the output should be\nid: 3\n\n";
	BasicField f(3);
	std::cout << "id: " << f.getID() << std::endl;
	std::cout << "--------------------------------\n";
}
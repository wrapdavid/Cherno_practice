#include<iostream>
class Base {
public:
	Base() { std::cout << "Base constructor" << std::endl; }
	virtual ~Base() { std::cout << "Base destructor" << std::endl; }
};

class Derive : public Base {
public:
	Derive() { std::cout << "Derive constructor" << std::endl; }
	~Derive() { std::cout << "Derive destructor" << std::endl; }
};
int main() {
	Base* base = new Base();
	delete base;
	std::cout << "--------------------" << std::endl;
	Derive* derive = new Derive();
	delete derive;
	std::cout << "--------------------" << std::endl;
	Base* poly = new Derive();
	delete poly;
	std::cin.get();

}
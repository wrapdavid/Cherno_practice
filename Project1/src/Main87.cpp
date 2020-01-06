#include<iostream>
class Base {
public:
	Base() { std::cout << "Base constructor" << std::endl; }
	virtual ~Base() { std::cout << "Base destructor" << std::endl; }
};

class Derive : public Base {
public:
	Derive() { m_array = new int[5]; std::cout << "Derive constructor" << std::endl; }
	~Derive() { delete[] m_array; std::cout << "Derive destructor" << std::endl; }
private:
	int* m_array;
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
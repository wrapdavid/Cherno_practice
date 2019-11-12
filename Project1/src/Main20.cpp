#include<iostream>

struct Entity {

	static int x, y;

	int a, b;

	void print() {
		std::cout << x << "," << y << ", " << a << std::endl;
	}
	void print1() {
		std::cout << a << "," << b << std::endl;
	}
};
int Entity::x;
int Entity::y;

int main() {
	Entity e; 
	e.x = 1;
	e.y = 2;
	e.a = 9;
	Entity e1;
	e1.x = 6;
	e1.y = 8;
	e1.a = 9;
	Entity e2;
	e2.a = 3;
	e2.b = 6;
	e.print();
	e1.print();
	e2.print1();
	std::cin.get();
}
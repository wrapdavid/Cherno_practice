#include<iostream>

struct Entity {
	 static int a, b;
	 static void print() {
		std::cout << a << "," << b << std::endl;

	}
};

static void print(int a = 1,int b = 0) {
	std::cout << a << "," << b << std::endl;

}

int Entity::a;

int Entity::b;

int main() {
	Entity e;
	e.a = 1;
	e.b = 3;
	Entity e0;
	e0.a = 2;
	e0.b = 6;
	e.print();
	e0.print();
	print();
	std::cin.get();
}
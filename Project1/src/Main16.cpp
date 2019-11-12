#include <iostream>
extern int LOG1;

extern void function();

struct Entity {

	 static int x, y;
	
	static void print(){
		std::cout << x << "," << y << std::endl;
	}
};

int Entity::x;
int Entity::y;


int main() {


	Entity e;
	Entity::x = 2;
	Entity::y = 9;
	
	Entity e1;
	Entity::x = 1;
	Entity::y = 3;

	Entity s1;
	Entity::x = 5;
	Entity::y = 4;
	Entity::print();
	Entity::print();

	std::cin.get();

}
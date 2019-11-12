#include<iostream>
int c = 5;


struct Entity {
	 int x, y;
void print() {
		std::cout << x << "," << y << std::endl;
	}
};
static void print(Entity e) {
	std::cout << e.x << "," << e.y << std::endl;
}
//int Entity::x;
//int Entity::y;


int main() {
	Entity e;
	e.x = 1;
	e.y = 2;
	Entity e1;
	e1.x = 6;
	e1.y = 4;
	e.print();
	e1.print();
	
	
	std::cin.get();
}
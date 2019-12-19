#include<iostream>

struct Entity {
	int a, b;
	int* GetPosition() {
		a = 6;
		return &a;
	}
};
int main() {
	Entity e = { 4, 8 };
	int* getposition = e.GetPosition();
	int* position = (int*)&e;
	int y = *(int*)((char*)&e+4);
	std::cout << position[0] << ", " << position[1] << std::endl;
	std::cout << y << std::endl;


	std::cin.get();
}

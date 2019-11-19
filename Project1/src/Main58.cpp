#include<iostream>
#include<string>
struct Vector3 {
	float x, z, y, a;

};
int main() {
	int offset = (int)&((Vector3*)nullptr)->z;
	std::cout << offset << std::endl;
	std::cin.get();
}
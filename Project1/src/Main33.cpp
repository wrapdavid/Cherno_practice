#include<iostream>
#include<array>
class Entity {
public:

	static const int examplesize = 5;
	int example[examplesize];

	std::array<int, 5> another;

	Entity() {
		 
		
		for (int i = 0; i < another.size(); i++) {
			example[i] = 2;
		}
	}
};

int main() {
	
	Entity e;
	std::cout << 0 / sizeof(int) << std::endl;
			 std::cin.get();

}
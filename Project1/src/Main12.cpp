#include<iostream>

#define Log(x) std::cout << x << std::endl;

void Increament(int& value) {
	 
	value++;
	
}

int main() {
	int a = 8;
	
	Increament(a);
	Log(a);

	std::cin.get();
}
#include<iostream>
#define Log(x) std::cout << x << std::endl
int main() {
	void* hi = nullptr;
	int x = 8;
	char* buffer = new char[8];
	memset(buffer, 3, 8);
	char** ptr = &buffer;
	std::cout << x << std::endl;
	std::cout << buffer << std::endl;
	delete[] buffer;
	std::cin.get();
}
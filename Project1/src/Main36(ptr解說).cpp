#include<iostream>
#include<string>
#include<stdlib.h>
int main() {
	//char name[] = "david";
	// name[2] = 'x';
	//std::cout << name << std::endl;


	const char* ptr1 = "hello";

	

	int example2[4] = {1, 2, 3, 4};

	char example[6] = "david";
	char* ptr = example;

	char example6[3] = { '1','i',0 };

	std::cout << ptr1 << std::endl;
	std::cout << example2 << std::endl;
	std::cout << example[4] << std::endl;
	std::cout << example6 << std::endl;
	std::cin.get();
}
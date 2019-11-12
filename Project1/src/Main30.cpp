#include<string>
#include<iostream>
#include<stdlib.h>

int main() {
	int example[5];
	int* ptr = example;

	for (int i = 0; i < 5; i++) {
		example[i] = 2;
	}

	example[2] = 5;
	*(example + 2) = 7;
	std::cin.get();
}
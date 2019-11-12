#include<stdio.h>
#include<stdlib.h>
#include<iostream>
int main() {
	char va = 'a';
	char* ptr = &va;
	const char* var = "hello";
	const char** ptr1 = &var;
	std::cout << *var[2] << std::endl;
//&var = "sad";
//const char** ptr = &var;

	system("pause");
}
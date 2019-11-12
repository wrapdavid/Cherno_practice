#include<iostream>
#include"Log.h"



int main() {
	int x = 5;
	const char* ptr = "Hello";
	if (ptr ) {
		Log(ptr);
	}
	if (ptr == "Hello") {
		Log("It is the Hello");
	}
	else
		Log("it is not ptr");
	
	std::cin.get();
}
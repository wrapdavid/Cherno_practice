
#include<iostream>
#include"Log.h"



static int multiply(int a, int b) {

	Log("multiply");
	return a * b;

}

int main() {
	std::cout << multiply(2, 5) << std::endl;
	std::cin.get();
	return 0;
}

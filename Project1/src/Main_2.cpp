#include<iostream>

int multiply(int a, int b) {
	
	return a * b;

}


void MultiplyBegin(int a, int b) {
	
	int result = multiply(a, b);
	std::cout << result << std::endl;
}

int main() {
	MultiplyBegin(5, 2);
	MultiplyBegin(3, 4);
	std::cin.get();
}
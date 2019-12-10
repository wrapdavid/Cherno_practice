#include<iostream>
#include<string>

void HelloWorld() {
	std::cout << "Hello World" << std::endl;
}

int main() {
	typedef void(*HelloWorldFunction)();
	HelloWorldFunction function = HelloWorld;
	//void(*function)() = HelloWorld;
	function();

	std::cin.get();
}
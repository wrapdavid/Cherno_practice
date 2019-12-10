#include<iostream>
#include<string>

void HelloWorld(int a) {
	std::cout << "Hello World, a value : " << a << std::endl;
}

int main() {
	typedef void(*HelloWorldFunction)(int);
	HelloWorldFunction function = HelloWorld;
	//void(*function)() = HelloWorld;
	function(8);

	std::cin.get();
}
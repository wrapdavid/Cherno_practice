#include<iostream>
#include<string>
#include"GLFW/glfw3.h"
 
extern "C" int glfwInit();

int main() {
	using namespace std;
	int a =  glfwInit();
	std::cout << a << std::endl;
	std::cin.get();
}



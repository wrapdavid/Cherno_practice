#include<iostream>

const char* GetName() {
	return "david";
}


int main() {
	//auto name = Name();
	std::string name = GetName();
	int size = name.size();
	std::cout << size << std::endl;
	std::cin.get();
}
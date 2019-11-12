#include<iostream>
#include<string>

void PrintFunction( std::string& string) {
	string += " :hi";
	std::cout << string << std::endl;
}
int main() {
	std::string name = std::string("david") + "mom"; //+ "00";
	//name += "mom";
	PrintFunction(name);
	bool contain = name.find("id") != std::string::npos;
	std::cout << contain << std::endl;
	std::cout << name << std::endl;
	//std::cout << name.size() << std::endl;
	std::cin.get();
}
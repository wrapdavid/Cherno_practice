#include<iostream>
 


namespace apple {
	namespace function
	{
		void apple_print(const char* value) {
			std::cout << value << std::endl;
		}
	}
}
namespace orange {
	namespace function{
		void orange_print(const char* text) {
			std::string value = text;
			std::reverse(value.begin(), value.end());
			std::cout << value << std::endl;
		}
	}
}


int main() {
	namespace a = apple::function;
	using namespace apple;
	using namespace function;
	a::apple_print("as");
	orange::function::orange_print("hello");
	std::cin.get();
	
}
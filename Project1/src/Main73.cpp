#include<iostream>
#include<functional>
#include<string>
#include<algorithm>
#include<vector>

namespace apple {
	void print(std::string strings) {
		std::cout << strings << std::endl;
	}
}

namespace orange {
	void print(const char* text) {
		std::string strings = text;
		std::reverse(strings.begin(), strings.end());
		std::cout << strings << std::endl;
	}

}
using namespace apple;
using namespace orange;
int main() {

	print("hello");



	std::cin.get();
}


#include<iostream>
#include<stdlib.h>
#include<string>

int main() {
	using namespace std;
	using namespace std::string_literals;
	string name0 = u8"david"s + u8" say hi";
	/*===============================================================*/
	const char* example = "my" " name" " is " "david";
	const char* example1 = R"(my name is david tsai.)";
	/*===============================================================*/
	const char* name = u8"david";
	const wchar_t* name2 = L"david2";
	const char16_t* name3 = u"david";
	const char32_t* name4 = U"david";

	std::cout << name0 << "    " << name0.size() << std::endl;
	std::cout << sizeof(name2) << std::endl;
	std::cout << example << std::endl;
	std::cout << example1 << std::endl;



	std::cin.get();
}
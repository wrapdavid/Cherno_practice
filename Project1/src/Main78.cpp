#include<iostream>
#include<chrono>
int main() {
	using namespace std::chrono;
	std::chrono::milliseconds ms(1000);
	ms *= 60;

	std::cout << "duration (in periods): ";
	std::cout << ms.count() << " ms \n" ;

	std::cout << "duration (in seconds): ";
	std::cout << ms.count() * milliseconds::period::num / std::chrono::milliseconds::period::den;
	std::cout << " seconds\n";

}
// steady_clock example
#include<iostream>
#include<ratio>
#include<chrono>
#include<ctime>

int main() {
	std::chrono::steady_clock::time_point p1 = std::chrono::steady_clock::now();
	std::cout << "print out 100 *";
	for (int i = 0; i < 100; i++) std::cout << "*\n";
	
	std::chrono::steady_clock::time_point p2 = std::chrono::steady_clock::now();
	std::chrono::duration<float> duration = std::chrono::duration_cast<std::chrono::duration<float>>(p2 - p1);
	std::cout << "It took me : " << duration.count()*1000 << "ms" << std::endl;
	
	
	std::cin.get();


}
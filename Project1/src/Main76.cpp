#include<iostream>
#include<thread>
#include<chrono>
#include<algorithm>


struct timeing
{
	std::chrono::steady_clock::time_point start, end;
	std::chrono::duration<float> duration;


	timeing() {
		start = std::chrono::high_resolution_clock::now();
		

	}
	~timeing() {
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;
		float ms = duration.count() *1000.0f;
		std::cout << "it is took: " << ms << " ms" << std::endl;
	}
};

void Function() {
	timeing t;
	for (int i = 0; i < 100; i++)
		std::cout << "working..." << std::endl;
		//std::cout << "working\n";
}
int main() {

	Function();

	std::cin.get();


}

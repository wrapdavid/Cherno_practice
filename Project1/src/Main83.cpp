#include<iostream>
#include<string>
#include<chrono>
struct Timer {
	std::chrono::time_point<std::chrono::steady_clock> start, end;
	std::chrono::duration<float> duration;
	Timer() {
		start = std::chrono::high_resolution_clock::now();
	}
	~Timer() {
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;
		float ms = duration.count() * 1000.0f;
		std::cout << "it took: " << ms << "ms" << std::endl;
	}
};
int main() {
	{
	int** array = new int* [5];
	for (int y = 0; y < 5; y++) {


		for (int x = 0; x < 5; x++) {
			array[x] = new int[5];
			array[x][y] = 2;

		}
	}

	}

	{
	Timer time;
	int* a2d = new int[5 * 5];
	for (int y = 0; y < 5; y++) {


		for (int x = 0; x < 5; x++) {
			a2d[x + y * 5] = 2;

		}
	}
	}
	std::cin.get();
}
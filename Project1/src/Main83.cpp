#include<iostream>
#include<string>

int main() {
	int** array = new int* [5];
	for (int y = 0; y < 5; y++) {


		for (int x = 0; x < 5; x++) {
			array[x] = new int[5];
			array[x][y] = 2;

		}
	}


	int* a2d = new int[5 * 5];
	for (int y = 0; y < 5; y++) {


		for (int x = 0; x < 5; x++) {
			a2d[x + y * 5] = 2;

		}
	}
	std::cin.get();
}
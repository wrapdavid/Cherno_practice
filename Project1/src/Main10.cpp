#include<iostream>
#include"Log.h"

int main() {
	for (int i = 0; i < 6; i++){
		if ((i + 1) % 2 == 0)
			return 0;
		Log("Hello world");
		std::cout << i << std::endl;
		
	}
	std::cin.get();
}
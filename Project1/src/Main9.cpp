#include <iostream>
#include "Log.h"

int main() {
	/*int i = 0;
	const char* x = "bin" ;
		std::cout << x << std::endl;
		int c = 1235;
		std::cout << x << std::endl;
	bool Condition = true;
	for ( ; Condition; ) {
		Log("Hello world");
		i++;
		if (!(i < 5)) 
			Condition = 0;
	}*/

	bool condition = false;
	while (condition) {
		Log("Hello world");
	}
	Log("=========================================");
	do
	{
		Log("Hello world");
	} while (condition);
	std::cin.get();
}
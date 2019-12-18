#include<iostream>
#include<algorithm>
#include<vector>
//#include<functional>
int main() {
	std::vector<int> array = { 1, 2, 4, 5, 3 };
	
	std::sort(array.begin(), array.end(), [](int a, int b) 
		{  
	if (a == 1) {
		return false;
			}
	if (b == 1) {
		return true;
		   }
				
			return a < b;
		});
	for (int value : array)
		std::cout << value << std::endl;
	
	std::cin.get();
}
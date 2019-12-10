#include<iostream>
#include<array>



template<int N>
	void Print(const std::array<int, N>& data) {
		for (int i = 0; i < data.size(); i++)
		{
			std::cout << data[i] << std::endl;
		}
	}



int main() {

	std::array<int,5> data;
	data[0] = 5;
	data[1] = 1;
	data[2] = 2;
	data[3] = 3;
	data[4] = 4;

	
	Print<5>(data);
	std::cin.get();
}
#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>
void Print(int value) {
	std::cout << "value: " << value << std::endl;
}



void ForEach(std::vector<int>& values, const std::function<void(int)>& func) {

	for (int value : values) {
		if(value <= 5)
			func(value);
	}


}

int main() {
	std::vector<int> values = {1, 5, 4, 9, 5};
	auto it = std::find_if(values.begin(), values.end(), [](int value) {return value > 5; });
	std::cout << *it << std::endl;
	
	int ab = 5;

	auto lambda = [&](int value) mutable {
		ab = 4; std::cout << "value: " << value << ", " << *it << std::endl;
	};
	ForEach(values, lambda );
	std::cin.get();
}
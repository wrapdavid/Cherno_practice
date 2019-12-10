#include<iostream>
#include<string>
#include<vector>
void PrintFuction(int value) {
	std::cout << "value: " << value << std::endl;
}
void ForEach(std::vector<int> values, void(*fuc)(int)) {

	/*for (int value = 0; value < values.size();value++) {
		fuc(values[value]);
	}*/
	for (int vlaue : values) { //value in values
		fuc(vlaue);
	}
}


int main() {
	std::vector<int> values = { 1,2,5,3,47 };
	ForEach(values, PrintFuction);



	std::cin.get();

}
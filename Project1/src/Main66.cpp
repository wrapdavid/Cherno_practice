#include<iostream>



template<typename T, char N>
class Array {
private:
	T m_Array[N];
public:
	char GetArray() const { return N; }
};


int main() {

	Array<int, 61> array;
	std::cout << array.GetArray() << std::endl;


	std::cin.get();

}
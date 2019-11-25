#include<iostream>
template<typename T,int size>
class Array {
private:
	T m_Array[size];
public:
	int GetSize() const{ return size; }

};
template<typename T>
void Print(T value) {
	std::cout << value << std::endl;
}

int main() {
	Print("\x61");
	Array<int,5> array;
	std::cout << array.GetSize() << std::endl;
	std::cin.get();
}
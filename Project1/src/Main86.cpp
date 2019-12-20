#include<iostream>
#include<vector>

struct vector2 {
	float x;
};
struct vector4
{

	
	float x, y, z, w;

	vector2& GetA() {
		return *(vector2*)&x;
	}
	vector2& GetB() {
		return *(vector2*)&z;
	}
};

void PrintFuction(const vector2& vector) {
	std::cout << vector.x << ", " << vector.y << std::endl;
}

int main() {
	vector2 vect0;
	vector4 vect = { 1,3,4,6 };
	vect.x = 5;
	
	PrintFuction(vect.GetA());
	PrintFuction(vect.GetB());
	//std::cout << vect0.x << std::endl;
	
	std::cin.get();

}
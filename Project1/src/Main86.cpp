#include<iostream>
#include<vector>
class a {
public:
struct vector2 {
	float x, y;
};
struct vector4
{
	union {
		struct 
		{

		float x, y, z, w;

		};

		struct 
		{
			vector2 a, b;
		};
	};
};
};

void PrintFuction(const a::vector2& vector) {
	std::cout << vector.x << ", " << vector.y << std::endl;
}

int main() {
	a::vector4 vector = {2.0f, 3.0f, 4.0f, 5.0f};
	PrintFuction(vector.a);
	PrintFuction(vector.b);
	vector.y = 10.0f;
	std::cout << "======================" << std::endl;
	PrintFuction(vector.a);
	PrintFuction(vector.b);
	std::cin.get();

}
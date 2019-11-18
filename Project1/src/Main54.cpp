#include<iostream>
#include<string>
 
class Vector {
public:
	float x, y,z;
	
};

 std::ostream& operator<<(std::ostream& stream, const Vector& object) {
	 stream << object.x;
		return stream;
}

int main() {
	using namespace std;
	Vector* a = new Vector();
	(*a).x = 3;
	Vector* b = a;

	b->x = 5;
	std::cout << *a << endl;
 
	std::cin.get();
}

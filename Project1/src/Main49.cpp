#include<iostream>
#include<string>
struct Entity {
public:
	int m_X ;
	mutable int var;
public:
	Entity(int x): m_X(x){}
	Entity AddX(const Entity& other) const {
		 var = 5;
		return Entity(m_X + other.m_X);
	}
	Entity operator+(const Entity& other) const {
		return AddX(other);
	}
	bool operator==(const Entity& other)const {
		return m_X == other.m_X;
	}
	Entity GetX() {
		return Entity(m_X);
	}

	Entity SetX(int x) {
		m_X = x;
	}

};
std::ostream& operator<<(std::ostream& stream, const Entity& other) {
	stream << other.m_X;
	return stream;
}

void PrintFuction(const Entity& e) {
	std::cout << e << std::endl;
}

int main() {
	Entity e(1);
	Entity s(5);
	Entity resault1 = e.AddX(s);
	Entity resault2 = e + s + 1;
	PrintFuction(resault1);
	PrintFuction(resault2);
	if (resault1 == resault2) {
		std::cout << "match" << std::endl;
	}
	else
		std::cout << " not match" << std::endl;
	PrintFuction(e);
	const int Max_Age = 90;

	int* a = new int;

	*a = 2;
	a = (int*)&Max_Age;
	
	
std::cout << *a << std::endl;




	std::cin.get();
}
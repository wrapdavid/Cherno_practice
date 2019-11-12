#include<iostream>
using namespace std;
class Example {
public:
	Example() {
		std::cout << "Creat Entity!" << endl;
	}
	Example(int x) {
		std::cout << "Creat Entity with: " << x << " !" << endl;
	}
};
class Entity {
private:
	int m_score;
	std::string m_X;
	Example m_Example;
public:
	
	Entity() 
		:m_score(0), m_X(std::string("unknow"))
	{
		
	m_Example = Example(8);
	}
	Entity(const std::string& name)
		:m_X(name){
	
	}
	const std::string& GetName() const { return m_X; }
};


int main() {
	const Entity e;

	
	std::cin.get();
}
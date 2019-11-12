#include<iostream>
#include<string>
using String = std::string;
class Entity {
private:
	String m_Name;
public:
	Entity() : m_Name("unknow"){}
	Entity(const String& name) : m_Name(name) {}
	const String& GetName() const {
		return m_Name;
	}
};

int main() {
	Entity* e;
	{
		int* b = new int[50];
	b[2] = 2;
	Entity* entity =new(b) Entity("david");

	e = entity;
	std::cout << e->GetName() << std::endl;
	delete[] b;
	}
	int a = 5;
	

	//Entity* e = new Entity();
	//Entity* e = (Entity*)malloc(sizeof(entity));
	//free(e);
	delete e;


	int c;
	std::cin.get();
}
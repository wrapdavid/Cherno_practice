#include<iostream>
#include<string>

using String = std::string;

class Entity {
private:
	String m_Name;
public:
	 Entity():m_Name("unknow") { }
	 Entity(const String& name):m_Name(name) {}
	 const String& GetName() const { return m_Name; }

};

int main() {
	//Entity entity("david");
	Entity* e;
	{
	
		Entity* entity =new Entity("david123");
		e = entity;
		//std::cout << (*entity).GetName() << std::endl;
		std::cout << entity->GetName() << std::endl;
	}

	std::cin.get();
	delete e;
}
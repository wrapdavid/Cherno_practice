#include<iostream>
#include<string>

class printable {
public:
	virtual std::string GetClassName() = 0;
};

class Entity:public printable {
public:
	virtual std::string GetName() { return "Entity"; }
	 std::string GetClassName() override { return "Entity"; };
};
class Player:public Entity {
private:
	std::string m_name;
public:
	Player(const std::string& name):m_name(name) {}
	std::string  GetName() override {return m_name;}
	std::string GetClassName() override { return m_name; };
};

class A :public printable {
	std::string GetClassName() override { return "A"; }

};

void PrintName(Entity* name) {
	std::cout << name->GetName() << std::endl;
}

void Print(printable* obj ) {
	std::cout << obj->GetClassName() << std::endl;
	
}
int main() {
	Entity* e = new Entity();
	//PrintName(e);
	Player* p = new Player("david");
	//PrintName(p);
	Print(e);
	Print(p);
	
	Print(new A());
	std::cin.get();
}
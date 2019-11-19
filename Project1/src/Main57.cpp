#include<iostream>
#include<string>


class Entity {
public:
	int x = 2;
	void Print() const {
		std::cout << "hello!" << std::endl;
	}
};
class ScopePtr {
private:
	Entity* m_obj;
public:
	ScopePtr(Entity* entity):m_obj(entity){}
	~ScopePtr() { delete m_obj; }
	Entity* GetObj() {
		return m_obj;
	}
	Entity* operator->() {
		return m_obj;
	}
	const Entity* operator->() const {
		return m_obj;
	}
};
int main() {

	const ScopePtr entity = new Entity();
	entity->Print();

	std::cin.get();
}
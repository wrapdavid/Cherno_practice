#include<iostream>
#include<string>
class Entity {
public:
	std::string GetName() { return "Entity";}
};

class Player:public Entity
{
private:
	std::string m_name;
public:
	Player(const string& name)
		:m_name(name) {}
	std::string GetName() {return m_name;}
};

int main() {
	Entity* entity;
	std::cout << entity.GetName() << std::endl;
	Player player;
	std::cout << player.GetName("david") << std::endl;
	std::cin.get();

}
	
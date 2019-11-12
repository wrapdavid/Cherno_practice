#include<iostream>
#include<string>

class Entity {
public:
	int X ;
public:
	Entity() {
		X = 0;
	}
};
class Player:public Entity {
public:
	Player() {
		X = 5;
	}
};

int main() {
	Entity e;
	Player p;
	std::cout << p.X << std::endl;
	std::cin.get();
}
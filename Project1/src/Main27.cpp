#include<iostream>
#include<string>

class Entity {
protected:
	int X ;
public:
	Entity() :X(6) {
		
	}

};

class Player : public Entity {
public:
	Player() {
		X = 2;
		void printsa();
	}
};



int main() {
	Entity e;
	//e.X = 5;
	Player p;
	//std::cout << e.X << p.X <<std::endl;
	std::cin.get();

}
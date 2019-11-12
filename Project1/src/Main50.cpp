#include<iostream>

void PrintFunction(const Entity& e);
class Entity {
private:
	int x, y;
public:
	Entity(int x, int y) {
		Entity* const& const e = this;
		(*this).x = x;
				
		this->x = x;
		this->y;

		 Entity& e = *this;
		PrintFunction(*this);

	}
	int getX() {
		const Entity* e = this;

		const Entity& e = *this;

	}

};
void PrintFunction(const Entity const& e) {
	//
	
}

int main() {




	std::cin.get();
}
#include<iostream>

struct Entity {

	
	float x, y;

	Entity(float x, float y): x(x), y(y){}

	Entity Add(const Entity& other)const {
		return Entity(x + other.x, y + other.y);
	}
	Entity operator+(const Entity& other)const {
		return Add(other);
	}
	Entity mutiply(const Entity& other)const {
		return Entity(x * other.x, y * other.y);
	}
	Entity operator*(const Entity& other)const {
		return mutiply(other);
	}


	bool operator==(const Entity& other)const {
		return x == other.x && y == other.y;
	}
	bool operator!=(const Entity& other)const {
		//return !operator==(other);
		return !(*this == other);
	}

};

std::ostream& operator<<(std::ostream& stream, const Entity& other) {
	stream << other.x << ", " << other.y;
	return stream;
}

int main() {

	Entity position(2.0f, 1.0f) ;
	Entity speed(1.5f,1.5f);
	Entity powerup(4.0f, 2.0f);
	Entity resault1 = position.Add(speed.mutiply(powerup));
	Entity resault2 = (position + speed) * powerup;
	std::cout << resault1 << std::endl;
	std::cout << resault2 << std::endl;

	if(resault1 != resault2){
		std::cout << " no nice equal" << std::endl;
	}



	std::cin.get();

}
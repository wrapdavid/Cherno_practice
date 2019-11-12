//using String = std::string;
//class Entity{
//private:
//	String m_Name;
//	int m_Age;
//public:
//	Entity(int Age) : m_Name("unknow"), m_Age(Age)
//	{}
//
//	Entity(const std::string& name)
//		: m_Name(name), m_Age(-1)
//	{
//	}
//};


#include<iostream>
#include<string>

struct vector {
	float X, Y;
	vector(float x, float y)
		: X(x), Y(y){}
	/*vector Add( const vector& other ) const {
		return vector(X + other.X, Y + other.Y);
	}*/
	vector Add(const vector& other) const {
		return vector(X + other.X, Y + other.Y);
		
		
	}
	vector operator+(const vector& other) const {
		return Add(other);
	}

	vector multiply(const vector& other) const {
		return vector(X * other.X, Y + other.Y);
	}
	vector operator*(const vector& other) const {
		return multiply(other);
	}

	
};

std::ostream& operator<<(std::ostream& otherstream, const vector& other){

	otherstream << other.X << ", " << other.Y;
	return otherstream;
}
int main() {
	vector position(0.5f, 0.6f);
	vector speed = vector(1.0f, 2.0f);
	vector powerup = vector(2.0f, 2.0f);
	
	
	vector resault1 = position.Add(speed.multiply(powerup));
	vector resault2 = position + speed * powerup;

	std::cout << resault2 << std::endl;
	
	
	//std::cout << resualt << std::endl;
	
	std::cin.get();
}
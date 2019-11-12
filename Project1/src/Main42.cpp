#include<iostream>
#include<string>
class Entity {
private:
	int  m_Score;
	std::string m_X, m_Y;
public:
	Entity()
		:  m_Score(0), m_X("unknow")
	{	
	}
	Entity(const std::string& name)
		: m_X(name)
	{
		
	}
	const std::string& GetName() const { return m_X; }
};


int main() {
	using namespace std;

	Entity e0;
	cout << e0.GetName() << endl;

	Entity e1("David");
	cout << e1.GetName() << endl;


	std::cin.get();

}
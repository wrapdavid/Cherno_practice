#include<iostream>
#include<string>

class Entity {
private:
	std::string m_String;
	mutable int m_DebugCount = 0;
public:
	const std::string& GetName() const {
		m_DebugCount++;
		return m_String;
	}
};

int main() {
	using namespace std;
	const Entity e;
	int x = 8;
	auto f = [=]() mutable {

		x++;
		std::cout << x << endl;

	};
	f();
	std::cout << x << endl;
	e.GetName();
	cin.get();
}
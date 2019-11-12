#include<iostream>
class Singleton {

public:
	static Singleton& get() {
		static Singleton Instance;
		return Instance;
	}
	void hello(){}
};





int main() {
	
	Singleton::get().hello();


	std::cin.get();

}
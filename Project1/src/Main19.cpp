#include<iostream>


class Singleton {
private:
	static Singleton* s_Instance;
public:
	static Singleton& get() { return *s_Instance; }
	void Hello(){}


};

Singleton* Singleton::s_Instance = nullptr;
static Singleton& get(Singleton* s_Instance) { return  *s_Instance; }
int main() {
	
	Singleton::get().Hello();

	std::cin.get();

}
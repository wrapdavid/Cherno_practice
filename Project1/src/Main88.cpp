#include<iostream>


 class Base {
 public:
	 Base() {}
	 virtual ~Base() {}
	
 };
 class Derive : public Base {
 public:

	 Derive(){}
	 ~Derive(){}

 };

 class AnotherClass : public Base {
 public:
	 AnotherClass(){}
	 ~AnotherClass(){}
 };
int main() {
	
	Derive* derive = new Derive();
	Base* base = derive ;
	Derive* ac = dynamic_cast<Derive*>(base);
	
	std::cin.get();
 }
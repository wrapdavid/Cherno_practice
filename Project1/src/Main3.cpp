#include"iostream"
#include"Log.h"


 void InitLog() {
	Log("InitLog");
}

 int main()
 {
	 int a = 8123;
	 a++;
	 const char* c = "Hello";
 	 for (int i = 0; i < sizeof(c); i++) {
		 std::cout << &i << std::endl;
	 std::cout << c[i] << std::endl;
	 }

	Log("Hello World");
		std::cin.get();

}
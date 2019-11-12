#include<iostream>
#include<string>

class Entity {

public:
	Entity() {
		std::cout << "Creat Entity" << std::endl;
	}
	~Entity() {
		std::cout << "delete Entity" << std::endl;
	}
};

int* CreatArray(int* array) {
	
	for (int i = 0; i < 50; i++) {
		array[i] = 6;
	}
	
	return array;
}
void PrintArray(int* array) {
	for (int i = 0; i < 50; i++) {
		printf("%d",array[i]);
	}
}
	
class ScopePtr {
private:
	Entity* m_ptr;
public:
	ScopePtr(Entity* ptr) :m_ptr(ptr) {

	}
	~ScopePtr() {
		std::cout << "die" << std::endl;
		delete m_ptr;
	}

};

int main() {
	/*int array[50];
	int* a = CreatArray(array);
	PrintArray(a);*/
	{ScopePtr e = new Entity(); 
	}
	
	std::cin.get();
}
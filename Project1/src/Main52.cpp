#include<iostream>
#include<string>

class Entity {
public:
	Entity() {
		std::cout << "creat Entity" << std::endl;
	}
	~Entity() {
		std::cout << "destory Entity" << std::endl;
	}
};

void CreatArray(int* array) {
	//fill out array;
}
 class ScorePtr {
private:
	Entity* m_ptr;
public:
	explicit ScorePtr(Entity* ptr):m_ptr(ptr){
	}
	 ~ScorePtr() {
		delete m_ptr;
	}
};
int main() {


	
	/*int a[50];
	CreatArray(a);*/
	{
		ScorePtr e(new Entity());
	}
}
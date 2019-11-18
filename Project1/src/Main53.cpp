#include<iostream>
#include<string>
#include<memory>

class Entity {
private:

public:

	Entity(){
		std::cout << "creat Entity" << std::endl;
	}
	~Entity() {
		std::cout << "destroy Entity" << std::endl;
	}
	void Print() {}
};

class ScorpPtr {
private:
	Entity* m_ptr;
public:
	explicit ScorpPtr(Entity* ptr): m_ptr(ptr){
	}
	void Print() {}
	~ScorpPtr() {
		delete m_ptr;
	}
	
};



int main() {
	{
		std::shared_ptr<Entity> e0;
		//std::weak_ptr<Entity> e1;
		{
			//ScorpPtr e(new Entity());

			//std::unique_ptr<Entity> e(new Entity());
			//std::unique_ptr<Entity> e = std::make_unique<Entity>();
			//std::unique_ptr<Entity> shareptr(new Entity());
			std::shared_ptr<Entity> shareEntity = std::make_shared<Entity>();
			//e1 = shareEntity;
			e0 = shareEntity;
		}
	}
	std::cin.get();
}
//overhead:在计算机网络的帧结构中，除了有用数据以外，
//还有很多控制信息，这些控制信息用来保证通信的完成。这些控制信息被称作系统开销。
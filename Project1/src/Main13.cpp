#include<iostream>
#include"Log.h"

 struct Player {

	int x = 1, y = 1;
	int speed = 5;
	void Move(int xt, int yt)
	{
		x += xt * speed;
		y += yt * speed;
	}
};

 struct Vec2 {
	
	 float x, y;
	 void Add(const Vec2& other) {
		 x += other.x;
		 y += other.y;


	 }
	
 };

int main() {

	float x = 2.2;
	Player player;
	player.Move(2, 3);
	
	std::cout << player.x << std::endl;
	std::cout << player.y << std::endl;
	std::cin.get();
}
#include<iostream>

struct vector3 {
	float x, y, z;
	vector3()
		:x(10), y(11), z(12){}

};


int main() {
	int value = 5;
	int array[5];
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;
	

	vector3 vector;

	int* hvalue = new int;
	*hvalue = 5;
	int* harray = new int[5];
	harray[0] = 1;
	harray[1] = 2;
	harray[2] = 3;
	harray[3] = 4;
	harray[4] = 5;
	vector3* hvector = new vector3();
	delete hvalue;
	delete[] harray;
	delete hvector;


	std::cin.get();
}
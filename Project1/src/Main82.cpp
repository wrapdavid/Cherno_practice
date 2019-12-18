#include<iostream>
#include<string>

int main() {


	int** a2d = new int* [5];
	for (int i = 0; i < 5; i++)
		a2d[i] = new int[5];
	for (int i = 0; i < 5; i++)
		delete[] a2d[i];
	delete[] a2d;
  
	int*** a3d = new int** [5];
	for (int y = 0; y < 5; y++)
	{
		a3d[y] = new int* [5];
		for (int x = 0; x < 5; x++)
		{
			int** ptr = a3d[y];
			ptr[x] = new int[5];
		}
	
	}
	a3d[0][0][0] = 0;
	for(int y = 0; y < 5; y++)
	{
		for (int x= 0; x < 5; x++)
			delete[] a3d[x][y];
		delete[] a3d[y];
	}
	delete[] a3d;






	std::cin.get();
}

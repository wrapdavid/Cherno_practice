#include<iostream>
#include"Log.h"
#include"Log.h"


int main() {
	int x = 4;
	bool ComparisonResault = x == 5;
	if (ComparisonResault) {
		Log("Hi");
	}
	else {
		Log("It is not x = 5");
	}
	std::cin.get();
}
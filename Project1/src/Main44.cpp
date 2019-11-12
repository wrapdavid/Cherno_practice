#include<iostream>
#include<string>
static int s_Level = 1 ;
static int s_Speed = 2;


int main() {


	//if (s_Level > 5) {
	//	s_Speed = 10;

	//}
	//else {
	//	s_Speed = 5;
	//}
	s_Speed = s_Level > 5 && s_Level < 100? s_Level > 20 ? 20: 10 : 5;
	/*std::string rank = s_Level > 10 ? s_Level >20 ? "master" : "midium" : "Beginer";*/
	std::string rank;
	if ((s_Level > 10) && (s_Level < 20)) { rank = "midium"; }
	else if ((s_Level > 20) && (s_Level < 10000000000)) { rank = "master"; }
	else { rank = "Beginer"; }
	std::cout << rank << std::endl;
	std::cout << s_Speed << std::endl;
	std::cin.get();
}
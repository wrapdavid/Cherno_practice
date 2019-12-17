//system_clock example
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<ctime>
#include<ratio>
#include<chrono>

int main() {

std::chrono::duration<int, std::ratio<60 * 60 * 24>> one_day(1);

std::chrono::system_clock::time_point today = std::chrono::system_clock::now();

std::chrono::system_clock::time_point tomorrow = today + one_day;

std::time_t tt = std::chrono::system_clock::to_time_t(today);

std::cout << "today is: " << ctime(&tt) << std::endl;

tt = std::chrono::system_clock::to_time_t(tomorrow);
std::cout << "tommorow is: " << ctime(&tt) << std::endl;




	std::cin.get();

}
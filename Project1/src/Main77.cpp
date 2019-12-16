#include<iostream>
#include<chrono>
#include<ratio>

int main() {
	typedef std::chrono::duration<int> second_type;
	typedef std::chrono::duration<int, std::milli> milliseconds_type;
	typedef std::chrono::duration<int, std::ratio<60 * 60>> hours_type;

	hours_type h_oneday(24);
	//second_type s_oneday(24 * 60 * 60);
	second_type s_oneday(std::chrono::duration_cast<second_type>(h_oneday));
	milliseconds_type ms_oneday(s_oneday);

	second_type s_onehour(60 * 60);
	hours_type h_onehour(std::chrono::duration_cast<hours_type>(s_onehour));
	milliseconds_type ms_onehour(s_onehour);

	std::cout << ms_oneday.count() << " ms in one hour" << std::endl;

	return 0;




}
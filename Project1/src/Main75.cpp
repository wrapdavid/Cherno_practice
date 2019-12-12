#include<iostream>
#include<thread>

static bool s_finish = false;

void DoWork() {
	using namespace std::literals::chrono_literals;
	std::cout << "thread id is : " << std::this_thread::get_id() << std::endl;
	while (!s_finish)
	{
		
		std::cout << "working...." << std::endl;
		std::this_thread::sleep_for(1s);
	}


}


int main() {
	std::thread work(DoWork);
	std::cin.get();
	s_finish = true;
	work.join();
	std::cout << "finish" << std::endl;

	std::cout << "thread id is : " << std::this_thread::get_id() << std::endl;
	std::cin.get();
}
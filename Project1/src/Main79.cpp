// time_point_cast
#include<iostream>
#include<chrono>
#include<ratio>


int main()
{
	
	typedef std::chrono::duration<int, std::ratio<60 * 60 * 24>> days_type;

	std::chrono::time_point<std::chrono::system_clock, days_type> today = std::chrono::time_point_cast<days_type>(std::chrono::system_clock::now());//�k�䵥�����j�ഫ��days_type����

	std::cout << today.time_since_epoch().count() << " days since epoch"<< std::endl;// epoch = �ɥN�B�ɴ�



	


	return 0;
}
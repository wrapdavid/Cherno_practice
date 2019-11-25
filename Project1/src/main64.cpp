#include<iostream>
class EnumTest
{
public:
	enum Day : long { Sun = 21440564L, Mon = 123456789L, Tue, Wed, Thu, Fri, Sat };


};
int main()
{
	using namespace std;
	EnumTest Day;
	long x = (long)Day.Sun;
	long y = (long)Day.Mon;
	std::cout << "sun = " << x << endl;
	std::cout << "Mon = " << y << endl;

}
/* Output:
   Sun = 0
   Fri = 5
*/
#include<iostream>
#include<string>
namespace david{


	class Entity {
	private:
		int* m_X, m_Y;
		mutable int var;
	public:
		  int*  xGet() const  {
			
			  var = 5;
			 *xGet() = 5;
			 
			
			return m_X;
		}
		  int* xGet()  {


			  *xGet() = 5;


			  return m_X;
		  }
		void SetX() {

			m_X = &m_Y;
			
		}

	}
	;
}

void PrintEntity( const david::Entity& e) {

	e = Entity();
	std::cout << e.xGet() << std::endl;

}

int main() {
	using namespace std;
	using david::Entity;


	Entity e;
	

	const int MAX_AGE = 55;
	const int const*  a = new int;

	//*a = 5;
	a = (int*)&MAX_AGE;

	std::cout << a << endl;

	std::cin.get();

}

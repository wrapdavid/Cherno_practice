#include<iostream>

namespace david {
	int i, j, k;

	class Point2D {
	private:
		int _x, _y;
	public:
		Point2D() { _x = 0, _y = 0; }
		Point2D(int x, int y) : _x(x), _y(y) {};
		int x() {
			return _x;
		}
		int y() {
			return _y;
		}
	
	};
}

//using david::Point2D;
using namespace david;
using namespace std;
int main() {

	Point2D a(10,20);
	cout << a.x() << endl;
	cout << a.y() << endl;
	
	cin.get();

}
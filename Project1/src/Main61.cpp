#include<iostream>
#include<string>
#include<vector>

class Vertex {
private:
	float m_X, m_Y, m_Z;
public:
	Vertex(float x, float y, float z) : m_X(x), m_Y(y), m_Z(z)
	{
		
	}
	Vertex(const Vertex& vertices) : m_X(vertices.m_X), m_Y(vertices.m_Y), m_Z(vertices.m_Z)
	{
		std::cout << "copy!!" << std::endl;
	}
	friend std::ostream& operator<< (std::ostream& stream, const Vertex vertices);
};
std::ostream& operator<< (std::ostream& stream, const Vertex vertices) {
	stream << vertices.m_X << ", " << vertices.m_Y << ", " << vertices.m_Z;
	return stream;
}

void PassFunction( const std::vector<Vertex>& vertices) {

}

int main() {
	std::vector<Vertex> vertices;
	vertices.reserve(3);
	vertices.push_back(Vertex{ 1, 2, 3 });
	vertices.push_back(Vertex{ 4, 5, 6 });
	vertices.push_back(Vertex{ 7, 8, 9 });
	PassFunction(vertices);
	
	
	std::cin.get();
}

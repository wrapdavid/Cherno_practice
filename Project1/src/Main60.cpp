#include<iostream>
#include<string>
#include<vector>

class Vertex {
private:
	float X, Y, Z;
public:
	Vertex(float x, float y, float z)  
	: X(x), Y(y), Z(z)
	{
	}
	Vertex(const Vertex& vertex)
	: X(vertex.X), Y(vertex.Y), Z(vertex.Z)
	{}
	friend std::ostream& operator<<(std::ostream& stream, const Vertex& vertices);
};
void PassFunction(const std::vector<Vertex>& vertex) {
	
}
std::ostream& operator<<(std::ostream& stream, const Vertex& vertices) {
	stream << vertices.X << ", " << vertices.Y << ", " << vertices.Z;
	return stream;
}
int main() {
	std::vector<Vertex> vertices;
	PassFunction(vertices);

	vertices.push_back({ 1, 2, 3 });
	vertices.push_back({ 4, 5, 6 });
	for (Vertex v : vertices) {
		std::cout << v << std::endl;
	}
	/*vertices.erase(vertices.begin()+0);
	for (Vertex v : vertices) {
		std::cout << v << std::endl;
	}*/
	std::cin.get();
}
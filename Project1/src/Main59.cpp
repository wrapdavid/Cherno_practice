#include<iostream>
#include<string>
#include<vector>

class Vertex {
public:
	float x, y, z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex) {
	stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
	return stream;
}
void PassFunction(const std::vector<Vertex>& vectices) {

}


int main() {
	std::vector<Vertex> vectices;
	vectices.push_back({1,2,3});
	vectices.push_back({ 4,5,6 });
	PassFunction(vectices);
	for (int i = 0; i < vectices.size(); i++) {
		std::cout << vectices[i] << std::endl;
	}

	vectices.erase(vectices.begin() );

	for (Vertex& v : vectices) {
		std::cout << v << std::endl;
	}

	
	std::cin.get();

}
#include<iostream>
class Vector {
private:
	char* m_buffer;
	unsigned int m_size;
public:
	Vector(const char* string) {
		m_size = strlen(string);
		m_buffer = new char[m_size+1];
		
		memcpy(this->m_buffer, string, m_size);
		m_buffer[m_size] = 0;
	}
	Vector(const Vector& other) : m_size(other.m_size)   {
		std::cout << "copy Vector" << std::endl;
		m_buffer = new char[m_size + 1];
		memcpy(m_buffer, other.m_buffer, m_size + 1);


	}
	~Vector() {
		delete[] m_buffer;
	}
	char& operator[](unsigned int index) {
		return m_buffer[index];
	}
	friend std::ostream& operator<<(std::ostream& stream, const Vector& other);
};

std::ostream& operator<<(std::ostream& stream, const Vector& other) {
	stream << other.m_buffer;
		return stream;
}

void VectorPrint(const Vector& print) {
	Vector copy = print;
	std::cout << print << std::endl;
}
int main() {
	
	Vector a = "david";
	Vector b = a;
	
	b[2] = 'o';

	
	
	VectorPrint(a);
	VectorPrint(b);

	std::cin.get();
}

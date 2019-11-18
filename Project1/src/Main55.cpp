#include<iostream>
#include<string>

class String {
private:
	char* m_buffer;
	unsigned int m_size;
public:
	String(const char* string) {
		m_size = strlen(string);
		m_buffer = new char[m_size+1];
		m_buffer[m_size] = 0;
		for (int i = 0; i < m_size; i++) {
			m_buffer[i] = string[i];
		}

		//memcpy(m_buffer, string, m_size);
	}
	String(const String& other) 
		: m_size(other.m_size)
	{
		std::cout << "123" << std::endl;
		m_buffer = new char[m_size + 1];
		memcpy(m_buffer, other.m_buffer, m_size);
		m_buffer[m_size] = 0;

	}
	
	~String() {
		delete m_buffer;
	}
	char& operator[](unsigned int index) {
		return m_buffer[index];
	}

	friend std::ostream& operator<<(std::ostream& stream, const String& object);
};

std::ostream& operator<<(std::ostream& stream, const String& object) {
	stream << object.m_buffer;
	return stream;
}

void StringPrint(const String& string) {
	std::cout << string << std::endl;
}
int main() {
	using namespace std;

	String string("david");
 	String second = string;

	second[2] = 'a';

	StringPrint(string);
	StringPrint(second);
	//std::cout << string << endl;
	//std::cout << second << endl;
	cin.get();
}
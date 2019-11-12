#include<iostream>


class Log {
public:
	const int LogLevelError = 0;
	int LogLevelWarn = 1;
	int LogLevelInfo = 2;
private:
	int m_LogLevel = LogLevelInfo;
public:
	void SetLevel(int Level) {
		m_LogLevel = Level;
	}

	void Error(const char* message ) {
		if (m_LogLevel >= LogLevelError)
			std::cout << "[Error]:" << message << std::endl;
	}
	void Warn(const char* message) {
		if (m_LogLevel >= LogLevelWarn)
			std::cout << "[Warn]:" << message << std::endl;
	}
	void Info(const char* message) {
		if (m_LogLevel >= LogLevelInfo)
			std::cout << "[Info]:" << message << std::endl;
	}
};

int main() {
	Log log;
	log.SetLevel(log.LogLevelError);
	log.Error("hello");
	log.Warn("hello");
	log.Info("hello");

const char x = '\x41';
	std::cout << x << std::endl;
	x = '\x42';
	std::cout << x << std::endl;
		std::cin.get();
}
#include<iostream>

class Log {
public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;

private:
	int m_LogLevel = LogLevelInfo;
public:
	void SetLevel(int Level) {
		m_LogLevel = Level;
	}
	void Warning(const char* message) {
		if(m_LogLevel >= LogLevelWarning)
		std::cout << "[Warning]:" << message << std::endl;
	}
	void Error(const char* message) {
		if (m_LogLevel >= LogLevelError)
		std::cout << "[Error]:" << message << std::endl;
	}
	void Info(const char* message) {
		if (m_LogLevel >= LogLevelInfo)
		std::cout << "[Info]:" << message << std::endl;
	}
};
int main() {
	Log log;
	log.SetLevel(log.LogLevelInfo);
	log.Error("hello");
	log.Warning("hello");
	log.Info("hello");
	std::cin.get();
}
#include<iostream>

struct Log {

public:
	enum Level
	{
		SetLevelWarning = 0, SetLevelError, SetLevelInfo
	};
private:
	 int s_SetLevel = SetLevelInfo;
public:
	void SetLevel(Level level) {
		s_SetLevel = level;
	}

	void Warning(const char* message) {
		if(s_SetLevel >= SetLevelWarning)
		std::cout << "[Warning]" << message << std::endl;
	}
	void Error(const char* message) {
		if (s_SetLevel >= SetLevelError)
			std::cout << "[Errir]" << message << std::endl;
	}
	void Info(const char* message) {
		if (s_SetLevel >= SetLevelInfo)
			std::cout << "[Info]" << message << std::endl;
	}
};




int main() {
	Log log;
	log.SetLevel(Log::SetLevelInfo);
	log.Warning("Hello");
	log.Error("Hello");
	log.Info("Hello");
	std::cin.get();
}
#include<iostream>
#include<vector>
#include<iterator>
#include<unordered_map>
const char* GetName() {
	return "david";
}

class Device{};

class DeviceManager {
private:
	std::unordered_map<std::string, std::vector<Device*>> m_Devices;


public:
	const std::unordered_map<std::string, std::vector<Device*>>& GetDevices() const {
		return m_Devices;
	}
};
int main() {
	std::vector<std::string> strings;
	strings.push_back("apple");
	strings.push_back("orange");
	
	//std::vector<std::string>::iterator
	for (auto it = strings.begin(); it != strings.end(); it++) {
		std::cout << *it << std::endl;
	}

	using DeviceMap =  std::unordered_map<std::string, std::vector<Device*>>;
	typedef  std::unordered_map<std::string, std::vector<Device*>> devicemap;

	DeviceManager dm;
	
	const auto& devices = dm.GetDevices();

	std::cin.get();
}
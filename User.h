#pragma once
#include <string>

class User{
public:
	virtual void sendMessage(std::string mes) = 0;
};

class RealUser{
private:
	std::string username;
public:
	RealUser(std::string un): username(un){}
	void sendMessage() {
		std::cout << username << std::endl;
	}
};
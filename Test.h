#pragma once
#include <string>
#include <iostream>

class Test{
private:
	std::string name;
	int age;
public:
	Test(std::string name, int age);
	~Test();

	void printStatus();
};
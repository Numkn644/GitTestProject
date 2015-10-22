#include "Test.h"

using namespace std;

Test::Test(string name, int age)
{
	this->name = name;
	this->age = age;
}

Test::~Test(){}

void Test::printStatus()
{

	cout << "Name : " << name << endl;
	cout << "age : " << age << endl;
}
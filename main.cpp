#include <iostream>
#include "Test.h"

using namespace std;


int main()
{
	Test test1("ひろあき", 20);
	Test test2("岡田", 54);

	cout << "This is Test." << endl;
	test1.printStatus();
	test2.printStatus();
	

	return 0;
}
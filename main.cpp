#include <iostream>
#include "Test.h"

using namespace std;


int main()
{
	Test test1("�Ђ날��", 20);
	Test test2("���c", 54);

	cout << "This is Test." << endl;
	test1.printStatus();
	test2.printStatus();
	

	return 0;
}
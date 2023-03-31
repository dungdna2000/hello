#include <iostream>
#include "rectangle.h"
using namespace std;

// Bob added this line
int conflict()
{
	cout << "This is Bob version" << endl;
}	

int conflict(int a)
{
	cout << "Dung version" << endl;
}

int main(int)
{
	cout << "Hello, rectangle" << endl;
}


#include "pch.h"
#include <iostream>
#include<string>

using namespace std;

class T1 {
public:
	string s{ "abc" };
	double d{ 3.14 };
	int i{ 10 };
};

int main(int argc, char** argv)
{
	T1 o1;
	o1.d = 9.57;
    cout << "Hello World!\n";
	cout << "s: " << o1.s << ", i: " << o1.i << ", size: " << sizeof(o1) << endl;
	return 0;
}

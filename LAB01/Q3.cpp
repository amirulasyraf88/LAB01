// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int divide(int a, int b)
{
	return (a / b);
}

float divide(float a, float b)
{
	return (a / b);
}

float divide(int a, float b){
	return (a / b);
}

int _tmain(int argc, _TCHAR* argv[])
{
	
	int x = 5, y = 2;
	float n = 5.0, m = 2.0;
	cout << divide(x, y);  // which divide is called
	cout << "\n";
	cout << divide(n, m);  // which divide is called
	cout << "\n";
	cout << divide(x, m); // uncomment this line and note the error message

	system("PAUSE");
	return 0;

	return 0;
}


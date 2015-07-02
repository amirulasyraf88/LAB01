#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	char name[20];
	char* ptr1, *ptr2;

	system("title Lab 1: Are you ready?");
	cout << "Enter a name -> ";
	cin >> name;
	cout << "Output : ";

	for (ptr1 = name; *ptr1 != '\0'; ptr1++)
	{
		for (ptr2 = ptr1; *ptr2 != '\0'; ptr2++){
			cout << *ptr2;
		}
		cout << ' ';
	}
	cout << endl;

	system("pause");
	return 0;


	return 0;
}
return 0;
}
#include<iostream>
#include<string>

void main()
{
	string str;
	string::iterator it;
	for (it = str.begin(); it != str.end(); it++)
	{
		cout << *it - 32;
	}
	int (*fp)()
}
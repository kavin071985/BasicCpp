#include<iostream>
#include<string>	

void display(string str)
{
	std::string::iterator it;
	for (it = str.begin(); it != str.end(); it++)
	{
		cout << *it;
	}
}

void main
{
	string s;
void (*fp)(string) = display(string s);
std::cout << "enter the name:";
std::cin >> s;

}
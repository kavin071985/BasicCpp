#include<iostream>

void inc(int* v)
{
	(*v)++;
	std::cout << v << std::endl;
}

void main()
{
	int a = 5;
	inc(&a);
	std::cout << a << std::endl;
	std::cin.get();
}
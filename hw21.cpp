#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int x , y;
	std::cin >> x >> y;
	int* px = &x;
	int* py = &y;
	int sum = (*px + *py) / 2;
	std::cout << sum;

	return 0;
}
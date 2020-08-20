#include<iostream>
int main()
{
	long long int num[80];
	num[0] = 1;
	num[1] = 2;
	for (int i = 2; i < 80; i++)
	{
		num[i] = num[i - 1] + num[i - 2];
	}
	int from, to;
	long long int sum;
	while (std::cin >> from>>to)
	{
		sum = 0;
		for (int i = from-1; i < to; i++)
		{
			sum = sum + num[i];
		}
		std::cout << sum<<"\n";
	}
	return 0;
}
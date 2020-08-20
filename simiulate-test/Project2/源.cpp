#include<iostream>
int main()
{
	long long int num[90];
	num[0] = 1;
	num[1] = 2;
	for (int i = 2; i < 90; i++)
	{
		num[i] = num[i - 1] + num[i - 2];
	}
	int input;
	while (std::cin>>input)
	{
		std::cout<< num[input - 1]<<"\n";
	}
	return 0;
}
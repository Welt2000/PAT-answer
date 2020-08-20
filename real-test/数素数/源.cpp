#include<iostream>
#include<vector>
bool sushu(std::vector<int> su, int num)
{
	for (int i = 1; i <su.size()-1; i++)
	{
		if (num % su[i] == 0)
		{
			return false;
		}		
	}
	return true;
}
int main()
{
	std::vector<int> su;
	su.push_back(1);
	su.push_back(2);
	int num=3;
	for (int i = 2; i < 10001; i++)
	{
		for (num;; num++)
		{
			if (sushu(su, num))
			{
				su.push_back(num);
				num++;
				break;
			}
		}
	}
	int M, N;
	std::cin >> M>>N;
	for (int j = M; j < N; j++)
	{
		if ((j - M+1) % 10 == 0)
		{
			std::cout << su[j] << "\n";
		}
		else
		std::cout << su[j] << " ";
	}
	std::cout << su[N];
	return 0;
}
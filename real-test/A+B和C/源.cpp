#include<iostream>
bool compare(long A,long B, long C)
{
	if (A + B > C)
			return true;
	else
		return false;
}
int main()
{
	int n;
	std::cin >> n;
	long long (* num)[3]= new long  long[n][3];
	for (int i = 0; i < n; i++)
	{
		std::cin >> num[i][0] >> num[i][1] >> num[i][2];
		if (compare(num[i][0], num[i][1], num[i][2]))
		{
			std::cout << "Case #" << i +1<< ": " << "true\n";
		}
		else
		{
			std::cout << "Case #" << i+1 << ": " << "false\n";
		}
	}
	return 0;
}
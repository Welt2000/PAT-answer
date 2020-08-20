#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	long int num[100000];
	num[0] = 1;
	num[1] = 2;	
	for (int i = 2; i < 100000; i++)
	{
		num[i] = (num[i - 1] + num[i - 2]) % 1000000;
	}
	int n;
	while (cin >> n)
	{
		if (n < 37)
		{
			cout << num[n - 1] << "\n";
		}
		else
		cout << setfill('0') << setw(6) << num[n-1] << "\n";
	}
	return 0;
}
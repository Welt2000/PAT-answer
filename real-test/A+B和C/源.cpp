/*��Ŀ����
��������[-2��31�η�, 2��31�η�]�ڵ�3������A��B��C�����ж�A+B�Ƿ����C��

��������:
�����1�и���������T(<=10)���ǲ��������ĸ�����������T�����������ÿ��ռһ�У�˳�����A��B��C���������Կո�ָ���


�������:
��ÿ�������������һ���������Case #X: true�����A+B>C�����������Case #X: false��������X�ǲ��������ı�ţ���1��ʼ����

��������:
4
1 2 3
2 3 4
2147483647 0 2147483646
0 -2147483648 -2147483647

�������:
Case #1: false
Case #2: true
Case #3: true
Case #4: false */
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
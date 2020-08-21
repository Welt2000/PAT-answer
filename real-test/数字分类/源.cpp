/*题目描述
给定一系列正整数，请按要求对数字进行分类，并输出以下5个数字：

A1 = 能被5整除的数字中所有偶数的和；
A2 = 将被5除后余1的数字按给出顺序进行交错求和，即计算n1-n2+n3-n4...；
A3 = 被5除后余2的数字的个数；
A4 = 被5除后余3的数字的平均数，精确到小数点后1位；
A5 = 被5除后余4的数字中最大数字。

输入描述:
每个输入包含1个测试用例。每个测试用例先给出一个不超过1000的正整数N，随后给出N个不超过1000的待分类的正整数。数字间以空格分隔。


输出描述:
对给定的N个正整数，按题目要求计算A1~A5并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。
若其中某一类数字不存在，则在相应位置输出“N”。

输入例子:
13 1 2 3 4 5 6 7 8 9 10 20 16 18

输出例子:
30 11 2 9.7 9*/
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int num;
	int A[5] = {0};
	int flag = 1;
	int np = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		int yu = num % 5;
		switch (yu)
		{
		case 0:
			if(num%2==0)
			A[0] += num;
			break;
		case 1:
			A[1] += flag * num;
			flag *= -1;
			break;
		case 2:
			A[2]++;
			break;
		case 3:
			A[3] += num;
			np++;
			break;
		case 4:
			if (num > A[4])
				A[4] = num;
			break;
		}
	}
	double average=double(A[3])/double(np);
	
	for (int j = 0; j < 3; j++)
	{if(A[j]==0)
		printf("N ");
	else
		printf("%d ", A[j]);
	}
	if (A[3] == 0)
		printf("N");
	else
	printf("%0.1f", average);
	if (A[4] == 0)
		printf(" N");
	else
	printf(" %d", A[4]);
	return 0;
}
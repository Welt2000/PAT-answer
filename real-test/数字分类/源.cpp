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
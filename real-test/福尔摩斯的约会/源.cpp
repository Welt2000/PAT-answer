/*��Ŀ����
����̽����Ħ˹�ӵ�һ����ֵ�������������Լ��ɣ� 3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm����
����̽�ܿ�������ˣ���������ֵ�����ʵ���Ͼ���Լ���ʱ�䡰������ 14:04����
��Ϊǰ�����ַ����е�1����ͬ�Ĵ�дӢ����ĸ����Сд�����֣��ǵ�4����ĸ'D'�����������ģ�
��2����ͬ���ַ���'E'�����ǵ�5��Ӣ����ĸ������һ����ĵ�14����ͷ������һ���0�㵽23��������0��9���Լ���д��ĸA��N��ʾ����
�������ַ�����1����ͬ��Ӣ����ĸ's'�����ڵ�4��λ�ã���0��ʼ�������ϣ������4���ӡ�
�ָ��������ַ��������������Ħ˹����õ�Լ���ʱ�䡣
��������:
������4���зֱ����4���ǿա��������ո��ҳ��Ȳ�����60���ַ�����
�������:
��һ�������Լ���ʱ�䣬��ʽΪ��DAY HH:MM�������С�DAY����ĳ���ڵ�3�ַ���д��
��MON��ʾ����һ��TUE��ʾ���ڶ���WED��ʾ��������THU��ʾ�����ģ�FRI��ʾ�����壬SAT��ʾ��������SUN��ʾ�����ա�
��Ŀ���뱣֤ÿ�����Դ���Ψһ�⡣
��������:
3485djDkxh4hhGE
2984akDfkkkkggEdsb
s&hgsfdk
d&Hyscvnm
�������:
THU 14:04*/
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
	std::string a, b, c,d;
	cin >> a >> b >> c>>d;
	char day, hour;
	int i=0;
	for (i; i < a.size() && i < b.size(); i++)
	{
		if (a[i] == b[i] && a[i] >= 'A' && a[i] <= 'H')
		{
			day = a[i];
			break;
		}
	}

	for (++i; i < a.size()&&i<b.size(); i++)
	{
		if (a[i] == b[i])
		{
			hour = a[i];
			break;
		}
	}
	for (i =0; i < c.size() && i < d.size(); i++)
	{
		if (c[i] == d[i] && ((c[i] >= 'a' && c[i] <= 'z')|| (c[i] >= 'A' && c[i] <= 'Z')))
		{
			break;
		}
	}
	int dd = day - 'A' + 1;
	int hh, mm;
	if (hour >= '0' && hour <= '9')
	{
		hh = hour - '0';
	}
	else
	{
		hh = hour - 'A' + 10;
	}
	switch (dd)
	{
	case 1:
		printf("MON %02d:%02d", hh, i);
		break;
	case 2:
		printf("TUE %02d:%02d", hh, i);
		break;
	case 3:
		printf("WED %02d:%02d", hh, i);
		break;
	case 4:
		printf("THU %02d:%02d", hh, i);
		break;
	case 5:
		printf("FRI %02d:%02d", hh, i);
		break;
	case 6:
		printf("SAT %02d:%02d", hh, i);
		break;
	case 7:
		printf("SUN %02d:%02d", hh, i);
		break;
	}
	return 0;
}
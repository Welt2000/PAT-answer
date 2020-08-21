/*题目描述
大侦探福尔摩斯接到一张奇怪的字条：“我们约会吧！ 3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm”。
大侦探很快就明白了，字条上奇怪的乱码实际上就是约会的时间“星期四 14:04”，
因为前面两字符串中第1对相同的大写英文字母（大小写有区分）是第4个字母'D'，代表星期四；
第2对相同的字符是'E'，那是第5个英文字母，代表一天里的第14个钟头（于是一天的0点到23点由数字0到9、以及大写字母A到N表示）；
后面两字符串第1对相同的英文字母's'出现在第4个位置（从0开始计数）上，代表第4分钟。
现给定两对字符串，请帮助福尔摩斯解码得到约会的时间。
输入描述:
输入在4行中分别给出4个非空、不包含空格、且长度不超过60的字符串。
输出描述:
在一行中输出约会的时间，格式为“DAY HH:MM”，其中“DAY”是某星期的3字符缩写，
即MON表示星期一，TUE表示星期二，WED表示星期三，THU表示星期四，FRI表示星期五，SAT表示星期六，SUN表示星期日。
题目输入保证每个测试存在唯一解。
输入例子:
3485djDkxh4hhGE
2984akDfkkkkggEdsb
s&hgsfdk
d&Hyscvnm
输出例子:
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
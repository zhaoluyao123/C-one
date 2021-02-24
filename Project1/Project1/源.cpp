#define _CRT_SECURE_NO_WARNINGS 1//统计二进制中1的个数,写一个函数返回
#include<stdio.h>
//int sum(unsigned int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = sum(a);
//	printf("%d\n", ret);
//	return 0;
//}
//编程实现两个int整数m和n二进制表达中，有多少个位不同
//int Contary(int m, int n)
//{
//	int count = 0;
//	int tmp = m^n;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d\n%d", &m,&n);
//	int ret = Contary(m, n);
//	printf("%d\n", ret);
//	return 0;
//}
////获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//void get_bit(int m)
//{
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%2d", ((m >> i) & 1));
//	}
//	printf("\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%2d", ((m >> i) & 1));
//	}
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	get_bit(m);
//	return 0;
//}
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。arr是一个整形一维数组
//int  Print(int arr[],int sz)
//{
//	int i = 0;
//	int* p = arr;
//		for (i = 0; i < sz; i++)
//		{
//			printf("% d", *(p + i));
//		}
//		return 0;
//}
//int main()
//{
//	int arr[] = { 1,3,1,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr,sz);
//	return 0;
//}
//交换两个int变量的值，不能使用第三个变量
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d\n%d", &a, &b);
//	b = b - a;
//	a = a + b;
//	b = a - b;
//	printf("%d %d", a, b);
//	return 0;
//}
//实现一个函数打印乘法口诀表，口诀表的行数和列数自己指定，输入9，输出9*9的乘法口诀表
//void Print(int c)
//{
//	int a = 0;
//	int b = 0;
//	
//	int ret = 0;
//	
//	for (a = 1; a <= c; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			ret = a * b;
//			printf("%d*%d=%-4d  ", a, b, ret);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int c = 0;
//	scanf("%d", &c);
//	Print(c);
//	return 0;
//}
//递归实现打印一个整数的每一位
//void Print(int a)
//{
//	int b = 0;
//	b = a % 10;
//	if (a != 0)
//	{
//		
//		Print(a / 10);
//		printf("%d ", b);
//	}
//
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	Print(a);
//	return 0;
//}
//写一个递归函数digitsum(),输入一个非负整数，返回组成他的数字之和
int digitsum(unsigned int n)
{
	int ret = 0;
	if (n > 9)
	{
		ret = digitsum(n / 10) + n % 10;
		return ret;
    }
	else
	{
		return n;
	}
}
int main()
{
	unsigned int n = 0;
	scanf("%d", &n);
	int ret=digitsum(n);
	printf("%d", ret);
	return 0;
}
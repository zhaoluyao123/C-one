#define _CRT_SECURE_NO_WARNINGS 1//ͳ�ƶ�������1�ĸ���,дһ����������
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
//���ʵ������int����m��n�����Ʊ���У��ж��ٸ�λ��ͬ
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
////��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
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
//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣arr��һ������һά����
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
//��������int������ֵ������ʹ�õ���������
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
//ʵ��һ��������ӡ�˷��ھ����ھ���������������Լ�ָ��������9�����9*9�ĳ˷��ھ���
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
//�ݹ�ʵ�ִ�ӡһ��������ÿһλ
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
//дһ���ݹ麯��digitsum(),����һ���Ǹ����������������������֮��
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
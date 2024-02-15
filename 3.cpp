#define _CRT_SECURE_NO_WARNINGS 1
#include<windows.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<assert.h>//断言函数

int main(void)
{
	/*int i = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hello world\n");
	}*/
	/*char a = 'a';
	char b = 'b';
	printf("%c", a - b);*/

	//char const* p1 = "abcdef";
	//char const* p2 = "abcdef";

	//char arr1[] = "abcdef";
	//char arr2[] = "abcdef";

	//if (p1 == p2)//==
	//	printf("p1==p2");
	//else printf("p1!=p2");
	//if (arr1 == arr2)//!=
	//	printf("arr1==arr2");
	//else printf("arr1!=arr2");

	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* p[] = { arr1,arr2,arr3 };
	for (int i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d", *(p[i]+j));
		}
		printf("\n");
	}
	return 0;
}
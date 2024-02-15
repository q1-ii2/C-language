#define _CRT_SECURE_NO_WARNINGS 1
#include<windows.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<assert.h>//断言函数
unsigned char a = 0;
int my_strlen(const char* str)
{
	assert(*str);
	int count = 0;
	while (*str)
	{
		*str++;
		count++;
	}
	return count;
}

int main(void)
{
	//char i[] = "abd1123";
	//int count=my_strlen(i);
	//printf("%d\n", count);

	//if (my_strlen("abc") - my_strlen("fbqjr") >= 0)
	//	printf(">\n");
	//else
	//	printf("<\n");

	//if (strlen("abc") -strlen("fbqjr") >= 0)
	//	printf(">\n");
	//else
	//	printf("<\n");

	/*for (a = 0; a <= 255; a++)
	{
		printf("happy new year!%d\n", a);
	}*/
	/*char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d", strlen(a));
	for (i = 0; i < 1000; i++)printf("%d\n",a[i]);*/
	float f = 5.5;

	return 0;
}
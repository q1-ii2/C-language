 #define _CRT_SECURE_NO_WARNINGS 1
#include<F:\C++\studio\扫雷\扫雷\head.h>

void game()
{
	//雷的信息存储
	//布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };//11 * 11
	//2.排查出雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show,ROWS,COLS,'*');
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW,COL);
	//布置雷
	SetMine(mine, ROW,COL);
	DisplayBoard(mine, ROW, COL);
	//扫雷
	FIndMine(mine,show,ROW,COL);
}
void menu()
{
	printf("#######################################\n");
	printf("###	      1.play   0.exit       ###\n");
	printf("#######################################\n");
}

void test()
{
	srand(time(0));
	//srand((unsigned int)time(NULL));
	int input = 0;
	menu();

	do
	{
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break; 
		default:
			printf("选择错误，重新选择");
		}
	} while (input);
}

int main(void)
{	
	test();
	system("pause");
	return 0;
	
}
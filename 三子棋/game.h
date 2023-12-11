#define _CRT_SECURE_NO_WARNINGS 1
#include<windows.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#pragma once

#define ROW 3
#define COL 3

//初始化棋盘
void InitBoart(char board[ROW][COL], int row, int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void player_move(char board[ROW][COL], int row, int col);

//电脑下棋
void computer_move(char board[ROW][COL], int row, int col);

//判断输赢
char is_win(char board[ROW][COL], int row, int col);
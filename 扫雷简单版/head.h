#define _CRT_SECURE_NO_WARNINGS 1
#include<windows.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 80
#pragma once
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
void DisplayBoard(char board[ROWS][COLS],int row,int col);
void SetMine(char board[ROWS][COLS],int row,int col);
void FIndMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);

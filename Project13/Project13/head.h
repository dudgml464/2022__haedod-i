#define _CRT_SECURE_NO_WARNINGS// fopen ���� ���� ���� ������ ���� ����
#include <stdio.h>// fopen, fread, fclose �Լ��� ����� ��� ����>
#include <conio.h>// getch  ���͸� ġġ �ʴ��� �ڵ����� �ٺ���
#include <stdlib.h>
#include <string.h>
#define SIZE 30
#include "���ȭ��.c"
#include "�˻�ȭ��.c"
#include "yn.h"

typedef struct _book {
	char name[SIZE];             //å�̸� ����
	char author[SIZE];           //���� ����
	char publisher[SIZE];       //���ǻ� ����
	char publication_date[SIZE]; //���ǿ��� ����
	int book_out;//���� ���� 1=�������, 0=�ݳ�����
}Book;

void reg(); // å��� �Լ�
void reg_print();    // å ��� ��� �Լ�
void search_menu();   // å �˻� �޴� �Լ�
void search_b_name(); // å�̸����� �˻�
void search_b_author(); // ���ڷ� �˻�

FILE* fa;
Book b_list[1000];//å�� ����� �� �ִ� ����
int b_index = 0;
int i, j;
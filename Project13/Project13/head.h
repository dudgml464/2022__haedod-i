#define _CRT_SECURE_NO_WARNINGS// fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>// fopen, fread, fclose 함수가 선언된 헤더 파일>
#include <conio.h>// getch  엔터를 치치 않더라도 자동으로 줄변경
#include <stdlib.h>
#include <string.h>
#define SIZE 30
#include "등록화면.c"
#include "검색화면.c"
#include "yn.h"

typedef struct _book {
	char name[SIZE];             //책이름 문구
	char author[SIZE];           //저자 문구
	char publisher[SIZE];       //출판사 문구
	char publication_date[SIZE]; //출판연도 문구
	int book_out;//대출 여부 1=대출상태, 0=반납상태
}Book;

void reg(); // 책등록 함수
void reg_print();    // 책 목록 출력 함수
void search_menu();   // 책 검색 메뉴 함수
void search_b_name(); // 책이름으로 검색
void search_b_author(); // 저자로 검색

FILE* fa;
Book b_list[1000];//책의 등록할 수 있는 공간
int b_index = 0;
int i, j;
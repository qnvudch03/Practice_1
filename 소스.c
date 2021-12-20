#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) //	A=65, B=66,	a=97 b=98
{
	int A = 0;
	int n = 0;

	printf("대문자를 하나 입력하세요.\n");
	A = getchar();

	if (A > 97)
		n = 1;

	if (A < 97)
		n = 2;

	if (A < 65 || A>122)
		n = 3;

	switch (n)
	{
	case 1:
		printf("이영어의 소문자는 %c 입니다.\n", A - 32);
		break;

	case 2:
		printf("이영어의 소문자는 %c 입니다.\n", A + 32);
		break;

	case 3:
		printf("제대로 입력하세요.\n");
	}
}
﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[80];

	// fgets(str, 80, stdin);  // 80은 문자열의 크기, 키보드에서 입력한다는 stdin
	// puts(str);

	char s[] = "10 20 30";
	int a, b, c;

	sscanf(s, "%d %d %d", &a, &b, &c);
	printf("s 출력 : %d %d %d\n", a, b, c);  // 화면에 출력

	sprintf(str, "%d %d %d\n", a, b, c);  // str[ ] 출력
	printf("str 출력 : %s", str);
}
﻿#include <stdio.h>
int main()
{
	int* p[10];   // 정수 포인터의 10개자리 배열
	int (*q)[10]; // 10개 원소를 갖는 정수 배열의 포인터

	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	q = &a; //p = a;라고 쓸 수 없음, a라는 10개짜리의 배열을 통째로 q가 가진다.
	int* ptr = a;

	printf("%p %p %p\n", q, q + 1, ptr+1); 
	//q+1은 q와 40바이트 차이, ptr+1은 q와 4바이트 차이
}
#include <stdio.h>

int main()
{
	// 예제 4.22
	// n x n 정사각형
	int n;

	printf("n 입력 : ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			printf("*");
		printf("\n");
	}

	// x x y 사각형
	int x, y;

	printf("x x y 사각형의 x, y 입력 : ");
	scanf_s("%d %d", &x, &y);

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++)
			printf("O");
		printf("\n");
	}

	// 높이가 a인 계단
	int a;

	printf("a 입력 : ");
	scanf_s("%d", &a);

	for (int i = 0; i < a; i++) {  // (int i = 1; i <= a; 까지로 써도 됌
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
}
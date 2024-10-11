#include <stdio.h>

int main()
{
	// 이차원 배열 - 3행 4열
	int arr[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} }; // [] [] 를 두개 썼기 때문에 2차원

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%4d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	//이차원 배열 - 2행 3열
	int b[2][3] = { {1,2,3}, {5,6,7} };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%3d ", b[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// 이차원 배열을 쓰는 두가지 방법
	int c[2][3] = { {1,2,3}, {5,6,7} };
	int d[2][3] = { 1,2,3,4,5,6 };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%3d ", c[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%3d ", b[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// 3차원 배열
	int t[2][3][4] = { {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}},
		{{13,14,15,16}, {17,18,19,20}, {21,22,23,24}} };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 4; k++)
				printf("%4d", t[i][j][k]);
			printf("\n");
		}
		printf("\n");
	}
}

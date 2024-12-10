#include <stdio.h>

void printArr(int a[], int n) {  // 배열의 개수와 이름(주소)를 넘겨줌, int *a라 써도 됌
	for (int i = 0; i < n; i++)
		printf("%d", a[i]); // 포인터인데 배열처럼 쓸 수 있다
	printf("\n");
}

void changeArr(int a[], int n)
{
	for (int i = 0; i < n; i++)
		a[i] *= a[i];
}

// 2차원 배열을 매계변수로 전달받는 방법
void printArr2(int a[][4], int n)  // 뒤에는 몇자리인지 써줘야함
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++)
			printf("% 4d", a[i][j]);
		printf("\n");
	}	
}

int main()
{
	int a[] = { 1,2,3,4,5 };
	int b[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };

	printArr(a, 5);  // a는 주소
	changeArr(a, 5);
	printArr(a, 5);

	printArr2(b, 3); // 2차원 배열을 매개변수로 전달하는 방법
}
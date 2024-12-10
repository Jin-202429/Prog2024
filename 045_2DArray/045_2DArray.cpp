#include <stdio.h>
int main()
{
	int a[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };  //2차원 배열의 앞의 인덱스는 포인터와 같은 값?

	printf("%d\n", &a[0]);
	printf("%d\n", a);
	printf("%d\n", &a[1]);
	printf("%d\n", a + 1);
	printf("%d\n", &a[0] + 1);

	int (*p)[4] = &a[0];  // a는 정수 4개짜리 배열의 주소, (*p)는 4개짜리의 정수 포인터

	for (int j=0; j < 3; j++){
		for (int i = 0; i < 4; i++) {
			printf("%4d", (*(p + j))[i]);  // *(p + j)는 +4를 해주는 것
		}
		printf("\n");
	}
	
}
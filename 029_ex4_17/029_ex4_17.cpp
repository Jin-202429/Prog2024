#include <stdio.h>

int main()
{
	int n;

	printf("n 입력 : ");
	scanf_s("%d", &n);

	for (; n >= 1; n--)
		printf("%d", n);
	printf("\n");
}

/*
//2의 제곱
int pow, i; // 이 pow = 1과 for문안에 있는 pow는 다른 것

//for (int i=1; i <= n; i++)
//    pow *= 2
for (i = 1, pow = 1; i <= n; i++, pow *= 2) // 여기서 int i=1, pow=1은 for문에서만 적용됌
;
printf("%d\n", pow);

*/


//다시

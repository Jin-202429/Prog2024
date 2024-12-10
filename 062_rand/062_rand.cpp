#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//srand(2);  // () 안에 있는 숫자를 바꾸면 다른 값이 나옴
	srand(time(0));
	for (int i = 1; i <= 5; i++)
		printf("%d\n", rand());
	printf("\n");

	// 주사위를 던져서 1부터 6까지의 숫자 중에 10개가 랜덤으로 출력
	srand(time(NULL));
	for (int i = 1; i <= 10; i++)
		printf("%d\n", rand() % 6 + 1);
}


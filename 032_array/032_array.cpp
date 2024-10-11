#include <stdio.h>

int main()
{
	int arr[5] = { 1,3,5,7,9 };  // 배열이 0부터 시작해서 4까지 나타낸다
	int b[] = { 10,20,30,40,50 };  // int b[5]라고 적어줘야하는데 생략해도 된다. 숫자가 5개이므로. 초기화할때만 int b[]이렇게 써도 됌.
	int c[10] = { 1,2,3,4,5 };
	int d[10];

	for (int i = 0; i < 5; i++) // i <= 5라고 쓰면 6숫자를 출려하라고 하는 것이기 때문에 밑줄에 arr[i]가 에러가 난다
		printf("%d\n", arr[i]);

	for (int i = 0; i < 10; i++)
		printf("c[%d] = %d\n", i, c[i]);

	for (int i = 0; i < 10; i++)
		printf("d[%d] = %d\n", i, d[i]);
}
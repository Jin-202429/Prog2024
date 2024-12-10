#include <stdio.h>

int fibo(int n)
{
	if (n == 1 || n == 2)
		return 1;
	return fibo(n - 1) + fibo(n - 2);

}

int main()
{
	int n;

	printf("n 입력 : ");
	scanf_s("%d", &n);

	// n항까지의 피보나치의 수열을 출력하기 
	 for (int i =1; i<=n; i++)
		printf("%d", fibo(i));
	printf("\n");
}
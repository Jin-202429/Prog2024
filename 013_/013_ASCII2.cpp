#include<stdio.h>

int main()
{
	char c = '/';

	printf("%c %x %d\n", c, c, c); // %X(대문자)라고 쓰면 2F라고 출력이 된다.
}

int main()
{
	char c = '$';
	int a = 72;

	printf("%c 0x%X %d\n", c, c, c);
	printf("%c 0x%X %d\n", a, a, a); // 문자가 서로 호환이 된다
}
#include<stdio.h>

int main()
{
	char c = '/';

	printf("%c %x %d\n", c, c, c); // %X(�빮��)��� ���� 2F��� ����� �ȴ�.
}

int main()
{
	char c = '$';
	int a = 72;

	printf("%c 0x%X %d\n", c, c, c);
	printf("%c 0x%X %d\n", a, a, a); // ���ڰ� ���� ȣȯ�� �ȴ�
}
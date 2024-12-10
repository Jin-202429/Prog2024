#include <stdio.h>

int main()
{
	int a = 5;
	int b = 4;

	printf("a & b = %d\n", a & b);
	printf("a | b = %d\n", a | b);
	printf("a ^ b = %d\n", a ^ b);
	printf("~a = %d\n", ~a);
	printf("~b = %d\n", ~b);
	printf("a << 2 = %d\n", a << 2);
	printf("a >> 2 = %d\n", a >> 2);

	// a &= b;   // a = a & b;    // 복합대입 연산자
	
	// masking (특정한 부위를 가려준다.)
	int x = 106;    // 0110 1010
	int mask = 15;  // 0000 1111

	x &= mask;     // x = x & mask;
	printf("Masking : %d\n", x);
}
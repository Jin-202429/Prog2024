#include <stdio.h>
int main()
{
	int a = 10;
	int* ptr;
	ptr = &a;
	printf("%p = %p = %d\n", &a, ptr, a); // %p는 주소값, %d는 정수값
	// 주소를 지정해줄 수는 없음

	*ptr = 20; // a = 20;
	printf("%p = %p = %d\n", &a, ptr, a); // 포인터의 내용을 20으로 바꿔라
}
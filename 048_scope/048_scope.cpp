#include <stdio.h>

int a = 10; // 전역변수

void aaa()
{
	printf("in aaa: a = %d\n", a);  
}

void bbb()
{
	int a = 20; // 로컬변수, 전역변수 a와 다른 a임

	printf("in bbb: a = %d\n", a);  // 가까운 변수를 쓴다라고 c언어에서 지정되어 있기 때문에 a는 20이 출력
}
int main()
{
	aaa();
	bbb();
}
#include <stdio.h>

enum color { Red, Green, Blue};  // 구조체랑 똑같이 변수의 이름을 붙혀준다    // color라는 새로운 변수가 만들어진 것

int main()
{
	color x, y, z;

	x = Red;
	y = Green;
	z = Blue;

	printf("%d %d %d\n", x, y, z);   // 3가지의 값만 가지고 순서데로 0,1,2의 값을 가진다

	if (x == Red)
		printf("Red\n");
}
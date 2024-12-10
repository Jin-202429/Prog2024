#include <stdio.h>
#define PI 3.141592  // 매크로
// const double PI = 3.141592;  매크로랑 둘중에 하나만 적어주면 된다, 결과값 똑같음

double getArea(double r) {
	return PI * r * r;
}

int main() 
{
	// PI = 3.14;라고 쓸 수 없음, const는 값을 수정할 수 없다
	printf("%f\n", getArea(10));
}
#include <stdio.h>
#define SQUARE(x) ((x)*(x))   // x를 제곱하는 형식

int square(int x)
{
	return x * x;
}

int main() 
{
	int a = 5;

	printf("%d\n", SQUARE(a + 1));  // SQUARE(a)가 a*a로 바뀐다   // 대문자를 쓰면 매크로를 쓴 것  // square(a + 1)은 a + 1 * a + 1로 바뀜 -> 그래서 결과값이 11이 된다 (사용할 때 조심!!)
	//값을 36을 출력하고 싶으면 #define SQUARE(x) (x)*(x)로 쓰면 된다.     // 11을 출력하려면 #define SQUARE(x) x*x라고 쓰면 됌.
	
	printf("%d\n", square(a + 1));  // square를 소문자로 쓰면 함수로 쓴 것    
	printf("%d\n", (a + 1) * (a + 1));      // 수식

	a = 4;
	printf("%d\n", 100/SQUARE(a + 1));  // 100/(4+1)*(4+1)= 20*5 = 100   // 값을 똑같이 해주기 위해서는 #define SQUARE(x) ((x)*(x))를 써야함.
	printf("%d\n", 100/square(a + 1));  // 100/25 = 4
}
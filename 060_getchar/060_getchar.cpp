#include <stdio.h>

int main()
{
	char ch;

	//ch = getchar();
	//putchar(ch);  // 내가 쓰는데로 결과값이 나온다.  // abcd라고 적으면 a만 출력, 문자 하나만 받아들이고 쓴다

	while (true) {
		ch = getchar();
		if (ch == '\n')
			break;
		putchar(ch);  // 이렇게 쓰면 쓰는데로 결과값 출력
	}
}
#include <stdio.h>

int main()
{
	// c언어에서 문자열을 문자배열에 저장한다
	// c언어에 string 타입이 없다
	char s[] = "Hello, World!";  // 크기가 최소한 14개짜리 배열

	printf("%s\n", s);

	char t[6] = { 'h', 'e', 'l', 'l', 'o' };  // t라는 값에 t[5]라고 쓰면 \0가 들어갈 자리가 없기 때문에 이상한 값이 출력
	printf("%s\n", t);

	char name[20];
	printf("이름 입력 : ");
	scanf_s("%s", &name, 20); //문자열 배열에서 문자를 입력할때는 &(and) 표시를 하지 않음 - 표준 C언어  // 뒤에 숫자가 붙어야함 - vs에서만 // vs에서는 문자열 입력받을 때 문자열의 길이를 쓰게 했다
	                          // scanf_s의 사용법을 더욱 자세히 알고 싶으면 scanf_s를 선택하고 f1를 누르면 된다!!
	printf("%s\n", name);
}
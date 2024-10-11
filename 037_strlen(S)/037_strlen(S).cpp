#define _CRT_SECURE_NO_WARNINGS // 전처리 지시 구문  // 이것을 쓰면 형식적인 문자열을 쓸 수 있다
#include <stdio.h>
#include <string.h>

int main()
{
	char s[100] = "hello";
	int len = strlen(s);

	printf("배열의 칸 수:%d\n", (int)sizeof(s));
	printf("문자열의 길이:%d\n", len);

	char s1[] = "hello";
	char s2[100];

	//문자열 변수를 복사할 수 있다
	strcpy(s2, s1); // 뒤에서 앞으로
	printf("s1:%s\n", s1);
	printf("s2:%s\n", s2);

	//문자열 상수를 반복할 수 있다
	strcpy(s2, "Konyang University");  // 이것도 마찬가지로 define을 써서 strcpy_s라고 안써도 됌. 원래는 strcpy_s라고 써야지 실행이 됌.
	printf("s1:%s\n", s1);
	printf("s2:%s\n", s2);

	char greeting[100] = "hello, ";
	char name[100];

	printf("이름 입력: ");
	scanf("%s", name); // define을 써서 scanf_s라 안써도 됌.

	int x = sizeof(greeting) - strlen(greeting) - 1;
	strncat(greeting,name,x); 

	printf("%s\n", greeting);
	//주의할 점! 문자배열은 반드시 "\0"으로 끝나있어야한다.

	char str[10] = "";
	strcat(str, "hello");
	printf("%s\n", str);

	char str1[] = "sample";
	char str2[] = "simple";

	printf("%d\n", strcmp(str1, str2)); // sample이 simple보다 사전순으로 빠르기 때문에 음수가 출력
}
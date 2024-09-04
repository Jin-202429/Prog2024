// 006_format.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    // %d : 정수
    printf("%d + %d = %d\n", 2, 3, 5);

    // %f : 실수
    printf("%f\n", 3.14);
    printf("%.2f\n", 3.14);

    // %c : 문자하나
    printf("%c %c %c\n", 'a', 'b', 'c');

    // %s : 문자열
    printf("%s\n", "안녕하세요");

    printf("%8s%5d\n", "안녕", 123);

    printf("100%%\n");

    printf("\"안녕\"이라고 말하지 마");
}
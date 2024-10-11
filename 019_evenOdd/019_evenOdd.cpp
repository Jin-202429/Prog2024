#include <stdio.h>

int main()
{
    int x;  //선언문

    printf("숫자를 입력 : ");
    scanf_s("%d", &x);

    // control + U 
    // control + kc 누르면 주석처리가 됌
    /*
    if (x % 2 == 0) {
        printf("%d는 짝수입니다.", x);
    }
    if (x % 2 == 1) {
        printf("%d는 홀수입니다.", x);
    }
    */

    if (x % 2 == 0) {
        printf("%d는 짝수입니다.\n", x);
        printf("ㅎㅎㅎ\n");
    }
    else {  // {}는 써도 되고 안써도 된다. 하지만 문장이 두개이상이면 써줘야한다.
        printf("%d는 홀수입니다.\n", x);
        printf("ㅋㅋㅋ\n");
    }
}



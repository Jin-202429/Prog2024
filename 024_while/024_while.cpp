#include <stdio.h>

/*
int main()
{
    int i = 1;

    while (i <= 10) { // ()안에 있는게 항상 참
        printf("%d ", i); // while문으로 1에서 부터 10까지 출력하기
        i++;
    }
    printf("\n");
}
*/

/*
int main()
{
    int i = 1;

    while (true) {  // 무한루프
        printf("%d ", i); 
        i++;
    }
    printf("\n");
}
*/

/*
int main()
{
    int i = 1;

    while (true) {
        printf("%d ", i);
        i += 1000; // 오버플로우가 되면 마이너스가 나온다
    }
    printf("\n");
}
*/

/*
int main()
{
    int i = 1;

    while (true) {
        printf("%d ", i);
        i++;
        if (i > 100)
            break;
    }
    printf("\n");
}
*/
int main()
{
    printf("\n");

    // do - while
    int x = 1;

    do {
        printf("%d ", x);
        x++;
    } while (x <= 10);
}
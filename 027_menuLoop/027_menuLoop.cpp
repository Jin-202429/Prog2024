// 1. 별표 n개 출력한다
// 2. 1부터 n까지 홀수를 출력한다
// 3. 1부터 n까지 자연수를 모두 더한다

// 이 문제 3개는 다 외워야함
#include <iostream>

int main()
{
    int n;

    printf("n을 입력: ");
    scanf_s("%d", &n);

    
     // 별표를 n개 출력
    int i = 1;
    
    while (i <= n) {
        printf("*");
        i++;
    }
    printf("\n");
    

    
    // 홀수 출력
    i = 1;
    
    while (i <= n) {
        printf("%d", i);
        i += 2;
    }
    printf("\n");
    

    // 자연수 모두 더하기
    i = 1; // 주석처리 안하고 쓸거면 i = 1;이라고 쓴다
    int sum = 0;
    while (i <= n) {
        sum += i;
        i++;
    }
    printf("sum = %d\n", sum);
    
    // do - while 문

}


#include <stdio.h>

int itemCount = 0;  // 전역변수(global variable)
int money = 100;

void buyItem(int price, int cnt) 
{
	if (money >= price) {
		itemCount += cnt;
		money -= price;
		printf("아이템을 구매했습니다.\n");
		printf(" 아이템 개수 : %d\n", itemCount);
		printf(" 잔액: %d\n", money);
	}
	else {
		printf("잔액이 부족합니다.\n");
	}

}

int plus(int a, int b)
{
	return a + b;
}
int main()
{
	buyItem(30, 5);

	buyItem(40, 7);

	buyItem(20, 1);

	buyItem(30, 2);

	int sum = plus(3, 5);
	printf("%d\n", sum);
}

 
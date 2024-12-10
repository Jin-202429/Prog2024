#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 구조체 정의
struct ProductInfo {
	int num;            // 상품번호
	char name[20];      // 상품명      // 100으로 바꾸면 주소의 값이 100만큼 차이남
	int cost;           // 가격
};

void swap(ProductInfo a, ProductInfo b);  // 값에 의한 호출
void swap2(ProductInfo* a, ProductInfo* b);  // 주소에 의한 호출

int main()
{
	ProductInfo x;

	x.num = 1001;
	//#define _CRT_SECURE_NO_WARNINGS을 쓰지 않으려면 strcpy_s(x.name, 20, "제주 한라봉"); 를 써야함.   // c언어에는 = "문자열 함수" 이렇게 쓸 수 없음.   // 20은 문자열의 크기를 나타내는 것이기 때문에 sixeof(x.name)이라고 써도 됌.
	// 멤버 각각을 초기화 시켜도 되고 한 괄호안에 다 집어넣어 한번에 초기화 시켜도 된다.
	strcpy(x.name, "제주 한라봉");  // 표준함수
	x.cost = 20000;

	ProductInfo y = { 1002, "성주 꿀참외", 15000 };

	printf("%d %15s %7d\n", x.num, x.name, x.cost);
	printf("%d %15s %7d\n", y.num, y.name, y.cost);
	printf("\n");

	ProductInfo z;       // ProductInfo z = x;라 써도 똑같음

	z = x;

	printf("%d %15s %7d\n", z.num, z.name, z.cost);
	printf("\n");

	printf("%d \n", sizeof(x));
	printf("%d\n", &x);
	printf("%d\n", &x.num);
	printf("%d\n", &x.name);
	printf("%d\n", &x.cost);
	printf("\n");

	ProductInfo a = { 1003, "대전 성심당빵", 3500 };
	ProductInfo* p;

	// 구조체 포인터로 멤버를 사용하기 (-> 사용)
	p = &a;    // a의 주소를 가질 수 있다
	printf("%d %15s %7d\n", a.num, a.name, a.cost);
	printf("%d %15s %7d\n", (*p).num, (*p).name, (*p).cost);
	printf("%d %15s %7d\n", p -> num, p -> name, p -> cost);   // 3개의 결과값은 다 똑같음
	printf("\n");

	// 1001(x)번과 1003(a)번 상품을 바꾸자
	swap(x, a);
	printf("x: %d %-15s %7d\n", x.num, x.name, x.cost);
	printf("a: %d %-15s %7d\n", a.num, a.name, a.cost);  // 바뀌지 않음
	printf("\n");

	swap2(&x, &a);
	printf("x: %d %-15s %7d\n", x.num, x.name, x.cost);
	printf("a: %d %-15s %7d\n", a.num, a.name, a.cost);  // 바뀜
}

void swap(ProductInfo a, ProductInfo b)
{
	ProductInfo tmp = a;
	a = b;
	b = tmp;
}

void swap2(ProductInfo* a, ProductInfo* b)
{
	ProductInfo tmp = *a;
	*a = *b;
	*b = tmp;
}


#include<stdio.h>

int main()
{
	int score;

	printf("점수입력: ");
	scanf_s("%d", &score);

	// 점수에 따른 학점을 출력
	switch (score/10) // 정수 또는 문자
	{
	case 10:
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 6:
		printf("D\n");
		break;
	default:
		printf("F\n");
		break;
	}
}
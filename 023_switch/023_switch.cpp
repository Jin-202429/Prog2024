#include<stdio.h>

int main()
{
	int choice;

	printf("새 게임: 1\n");
	printf("불러오기: 2\n");
	printf("설정: 3\n");
	printf("크레딧: 4\n");
	scanf_s("%d", &choice);

	switch (choice) 
	{
	case 1: // 변수가 올 수 없고 항상 항수만 올 수 있다
		printf("새 게임\n");
		break;  // switch안에 break 없으면 그냥 바로 밑에 문장으로 넘어감
	case 2:
		printf("불러오기\n");
		break;
	case 3:
		printf("설정\n");
		break;
	case 4:
		printf("크레딧\n");
		break;
	default:
		printf("잘못 입력하셨습니다\n");
		break;
	}
}
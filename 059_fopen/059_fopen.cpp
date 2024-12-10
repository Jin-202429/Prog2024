#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* in;
	FILE* out;

	//fopen_s(&in,"input.txt", "r");   
	in = fopen("input.txt", "r");    // 표준으로 쓰는 것  // 표준함수로 쓸려면  // input1.txt라고만 적으면 에러
	if (in == NULL)
	{
		printf("input1.txt가 없습니다.\n");
		exit(1);  // 비정상적으로 끝났다는 것을 알려줌
	}

	out = fopen("output.txt", "w");   // output.txt가 만들어졌지만 여기서는 보이지 않고 파일을 찾아 열면 보인다.


	int n;

	//fscanf_s(in, "%d", &n);  // 비주얼 스튜디오 형식
	fscanf(in, "%d", &n);  // 표준함수로 쓴 것
	fprintf(out, "%d %d\n", n, n * n);
	printf("%d\n", n);

	fclose(in);
	fclose(out); // 프로그램이 파일을 자동적으로 닫아주지만 의도적으로 닫자
}
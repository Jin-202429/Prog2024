#include <iostream>

int main()
{
	int math = 95;
	int eng = 97;
	int kor = 88;

	int sum = math + eng + kor; 
	double avg = (double)sum / 3;  // 정수 / 정수 -> 정수      // double avg = sum / 3 => 93.000000으로 결과값이 나온다   // double avg = (double)sum / 3 => 93.333333으로 결과값이 나온다  
	                               // 이렇게 결과값이 나오는 이유는 sum이 정수형 변수이기 때문이다

	printf("평균 : %f\n", avg);
}


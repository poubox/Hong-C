#include <stdio.h>
//n까지 소수 출력
int main()
{
	int input_number; //사용자가 입력한 숫자를 저장할 변수
	int i;            //for문을 돌기 위해 필요한 변수_1
	int j;            //for문을 돌기 위해 필요한 변수_2
	int count = 0;    //약수의 개수를 카운팅할 변수

	printf("숫자를 입력하세요: ");
	scanf_s("%d", &input_number);

	for (i = 1; i <= input_number; i++) {
		for (j = 1; j <= i; j++) {
			if (count > 2) //약수의 개수가 3개 이상이면 탈출
				break;
			if (i % j == 0)
				count += 1;
		}
		if (count == 2) //약수의 개수가 2개이면 출력
			printf("%d ", i);
		count = 0;
	}
}

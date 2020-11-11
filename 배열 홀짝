#include <stdio.h>
int main()
{
	int arr[10];
	int i, a=0, z=9, input;
	printf("총 10개의 숫자 입력");
	for (i = 0; i < 10; i++) {
		printf("입력: ");
		scanf_s("%d", &input);
		if (input % 2 != 0) {
			arr[a] = input;
			a++;
		}
		else {
			arr[z] = input;
			z--;
		}
	}
	printf("배열 요소의 출력: ");
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
}

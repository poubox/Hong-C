#include <stdio.h>
//손익분기점.1(시간 초과 오류 생김)
/*int main()
{
	int a, b, c, x=1;//고정비용,가변비용,노트북 판매가,노트북 갯수
	printf("고정비용, 가변비용, 노트북 판매가: ");
	scanf_s("%d %d %d", &a, &b, &c);
	while (1)
	{
		x++;
		if (a + b * x < c * x) {
			printf("%d",x);
		}
	}
}*/
//손익분기점.2
int main()
{
	int a, b, c;
	printf("고정비용, 가변비용, 노트북 판매가: ");
	scanf_s("%d %d %d", &a, &b, &c);
	if (b >= c)
		printf("-1\n");
	else
		printf("%d\n", a / (c - b) + 1);
}

#include <stdio.h>
int main()
{
	int a, b, c, d, e;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);
	int choice1, choice2;
	if (a >= b) {
		if (b >= c)
			choice1 = c;
		else
			choice1 = b;
	}
	else {
		if (a >= c)
			choice1 = c;
		else
			choice1 = a;
	}
	if (d >= e)
		choice2 = e;
	else
		choice2 = d;
	printf("%d", choice1 + choice2 - 50);
}
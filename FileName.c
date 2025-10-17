#include<stdio.h>
	int max(int a, int b, int c) {
		int d;
		if (a >= b && a >= c)
			d = a;
		else if (b >= a && b >= c)
			d = b;
		else
			d = c;
		return d;
	}
	int main()
	{
		int a, b, c, d;
	scanf_s("%d%d%d", &a, &b, &c);
	d = max(a, b, c);
	printf("a,b,c最大的数是%d", d);
	return 0;
}

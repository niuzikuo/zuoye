#include<stdio.h>
int main() {
	int a, b, c1, c2, c3, c4, c5;
	printf("请输入一个数:");
	scanf_s("%d", &a);
	if (a >= 10000)
		b = 5;
	else if (a >= 1000 && a < 100000)
		b = 4;
	else if (a >= 100 && a < 1000)
		b = 3;
	else if (a >= 10 && a < 100)
		b = 2;
	else
		b = 1;
	printf("它是一个%d位数\n", b);
	switch (b) {
	case 5:c5 = a / 10000;
		a %= 10000;
		c4 = a / 1000;
		a %= 1000;
		c3 = a / 100;
		a %= 100;
		c2 = a / 10;
		a %= 10;
		c1 = a;
		printf("输出正序%d%d%d%d%d\n", c5, c4, c3, c2, c1);
		printf("输出逆序%d%d%d%d%d\n", c1, c2, c3, c4, c5); break;
	case 4:
		c4 = a / 1000;
		a %= 1000;
		c3 = a / 100;
		a %= 100;
		c2 = a / 10;
		a %= 10;
		c1 = a;
		printf("输出正序%d%d%d%d\n", c4, c3, c2, c1);
		printf("输出逆序%d%d%d%d\n", c1, c2, c3, c4); break;
	case 3:
		c3 = a / 100;
		a %= 100;
		c2 = a / 10;
		a %= 10;
		c1 = a;
		printf("输出正序%d%d%d\n", c3, c2, c1);
		printf("输出逆序%d%d%d\n", c1, c2, c3); break;
	case 2:c2 = a / 10;
		a %= 10;
		c1 = a;
		printf("输出正序%d%d\n", c2, c1);
		printf("输出逆序%d%d\n", c1, c2); break;
	case 1:c1 = a;
		printf("输出正序%d\n", c1);
		printf("输出逆序%d\n", c1); break;
	}
	return 0;
}
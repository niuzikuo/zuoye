#include<stdio.h>
int main() {
	printf("性别；\n");
	printf("男1,女2\n");
	int s, g, b;
	scanf_s("%d", &s);
	printf("体重:\n");
	scanf_s("%d", &g);
	switch (s) {
	case 1:
		if (g >= 120)
			b = 200;
		else
			b = 180; break;
	case 2:
		if (g >= 100)
			b = 150;
		else
			b = 120; break;
	}
	printf("输血量为%d", b);
	return 0;
}

	


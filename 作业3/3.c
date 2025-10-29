#include<stdio.h>
#define g grade
int main() {
	float g;
	scanf_s("%f", &g);
	if (g >= 90)
		printf("A");
	else if (g < 90 && g >= 80)
		printf("B");
	else if (g < 80 && g >= 70)
		printf("C");
	else if (g < 70 && g >= 60)
		printf("D");
	else
		printf("E");
	return 0;
}
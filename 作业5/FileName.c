#include<stdio.h>
double sum();
int main() {
	double a = sum();
	printf("%lf", a);

	return 0;
}
double sum() {
	double b = 0.0;
	int c = 1;
	for (int i = 1; i <= 100; i++) {
		b += (i*1.0 / (i + 1)) * c;
		c = -c;
	}
	return b;
}
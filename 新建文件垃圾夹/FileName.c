#include<stdio.h>
#define pi 3.1415926
int main() {
	double r,c,s;
	scanf_s("%lf", &r);
	c = pi * r * 2;
	s = pi * r * r;
	printf("Բ���ܳ�Ϊ%lf,���Ϊ%lf", c, s);
	return 0;
}
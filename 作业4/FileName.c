#include<stdio.h>
int main() {
	int a[10];
	int b, c, d;
	for (b = 0; b <= 9; b++) {
		scanf_s("%d", &a[b]);
		printf("\n");
	}
		for (c = 0; c <= 8; c++) {
			for (b = 0; b <= 8 - c; b++) {
				if (a[b] > a[b + 1]) {
					d = a[b];
					a[b] = a[b + 1];
					a[b + 1] = d;
				}
			}
		}
		for (b = 0; b <= 9; b++) {
			printf("%d", a[b]);
			printf("\n");
		}
		return 0;
	}

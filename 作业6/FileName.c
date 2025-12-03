#include<stdio.h>
int main() {
	int a[10], i, j, t, max;
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	for (i = 0; i < 10; i++)
	{
		max = i;
		for (j = i + 1; j < 10; j++) {
			if (a[j] > a[max])
				max = j;
		}

		if (max != i) {
			t = a[i];
			a[i] = a[max];
			a[max] = t;
		}
	}
	for (i = 0; i < 10; i++)
		printf("%d\n", a[i]);
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define col 5
#define row 5
#define mine 3
int main() {
	int i, j, x, y;
	char map[row][col] = { 0 };
	srand((unsigned int)time(NULL));
	int count = 0;
	while (count < mine) {
		i = rand() % col;
		j = rand() % row;
		if (map[i][j] != '*') {
			map[i][j] = '*';
			count++;
		}
	}
	int t = 0;

		printf("请他妈的玩扫雷游戏，说数列()():");

		scanf_s("%d%d", &x, &y);
		if (map[x][y] == '*')
			printf("菜逼一个，游戏结束");
		else {
			int count = 0;
			for (i = x - 1; i <= x + 1; i++) {
				for (j = y - 1; j <= y + 1; j++) {
					if (i >= 0 && i <= row && j >= 0 && j <= col && map[i][j] == '*')
						count++;
				}
			}
			printf("周围有 %d颗炸弹", count);
		}
		t++;

		return 0;
}
	




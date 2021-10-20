#include <stdio.h>

int main(void) {
	int i, j, k, count = 0;

	int a[2][2] = { {1,2},{1,2} };
	int b[2][2] = { {0,1},{0,1} };
	int p[2][2] = { 0 };
	int m[2][2] = { 0 };
	int x[2][2] = { 0 };

	int c1[2][2] = { { 1,3},{1,3} };
	int c2[2][2] = { {1,1},{1,1} };
	int c3[2][2] = { {0,3},{0,3} };

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			p[i][j] = a[i][j] + b[i][j];
			printf("%d ", p[i][j]);
			if (p[i][j] == c1[i][j]) {
				count++;
			}
		}
		printf("\n");
	}

	if (count == 4)
		printf("µ¡¼À ¼º°ø\n");

	count = 0;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			m[i][j] = a[i][j] - b[i][j];
			printf("%d ", m[i][j]);
			if (m[i][j] == c2[i][j]) {
				count++;
			}
		}
		printf("\n");
	}

	if (count == 4)
		printf("»¬¼À ¼º°ø\n");
	count = 0;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			for (k = 0; k < 2; k++) {
				x[i][j] += a[i][k] * b[k][j];
				if (x[i][j] == c3[i][j]) {
					count++;
				}
			}
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}

	if (count == 6)
		printf("°ö¼À ¼º°ø\n");
}
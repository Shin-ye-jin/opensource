#include<stdio.h>

int main(void)
{
	int i, j, num;

	int a[2][2];
	int b[2][2];
	int m[2][2];

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			scanf("%d", &num);
			a[i][j] = num;
		}
	}

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			scanf("%d", &num);
			b[i][j] = num;
		}
	}

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			m[i][j] = a[i][j] - b[i][j];
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}

}


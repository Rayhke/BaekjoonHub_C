#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int m = 0; m < n; m++) {
		for (int l = 0; l <= m; l++) printf("*");
		if (m != (n - 1)) printf("\n");
	}
	return 0;
}
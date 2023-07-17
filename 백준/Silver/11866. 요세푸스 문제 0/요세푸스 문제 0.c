#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, s, k;
	scanf("%d %d", &s, &k);
	int* p = (int*)malloc(sizeof(int) * s);
	for (int n = 0; n < s; n++) { p[n] = n + 1; }
	for (int n = 0; n < s; n++) {
		for (int m = 0; m < k - 1; m++) {
			a = p[n];
			for (int l = n; l < s - 1; l++) { p[l] = p[l + 1]; }
			p[s - 1] = a;
		}
	}
	printf("<");
	for (int n = 0; n < s; n++) {
		printf("%d", p[n]);
		if (n + 1 != s) { printf(", "); }
	}
	printf(">");
	free(p);
	return 0;
}
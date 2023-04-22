#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b[100], c, d = 0;
	scanf("%d", &a);
	for (int n = 0; n < a; n++) { scanf("%d", &b[n]); }
	scanf("%d", &c);
	for (int n = 0; n < a; n++) {
		if (b[n] == c) { d++; }
	}
	printf("%d", d);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a == b && a == c) {
		printf("%d", (10000 + (1000 * a)));
	}
	else if (a == b || a == c || b == c) {
		if (a == b) printf("%d", (1000 + (100 * a)));
		else if (a == c) printf("%d", (1000 + (100 * a)));
		else if (b == c) printf("%d", (1000 + (100 * b)));
	}
	else {
		a = (a > b) ? a : b;
		a = (a > c) ? a : c;
		printf("%d", (100 * a));
	}
	return 0;
}
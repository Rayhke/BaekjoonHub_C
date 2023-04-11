#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (; n > 0;) {
		printf("%d", n);
		if (n > 1) printf("\n");
		n--;
	}
	return 0;
}
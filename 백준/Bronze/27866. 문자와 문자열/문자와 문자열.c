#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	char a[1002];
	scanf("%s %d", &a, &n);
	printf("%c", a[n - 1]);
	return 0;
}
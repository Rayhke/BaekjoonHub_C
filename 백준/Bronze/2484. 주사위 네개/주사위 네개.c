#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int s(int a, int b, int c, int d) {
	int o = (a == b && a == c && a == d && b == c && b == d && c == d) ? 1 : 0;
	int p = 0;
	if (o == 1) { p = 50000 + (a * 5000); }
	else {
		if ((a == b && a == c && b == c) ||
			(a == b && a == d && b == d) ||
			(a == c && a == d && c == d)) { p = 10000 + (a * 1000); }
		else if (b == c && b == d && c == d) { p = 10000 + (b * 1000); }
		else {
			if ((a == b && c == d) ||
				(a == c && b == d)) { p = 2000 + (a * 500) + (d * 500); }
			else if (a == d && b == c) { p = 2000 + (a * 500) + (b * 500); }
			else {
				if (a == b || a == c || a == d) { p = 1000 + (a * 100); }
				else if (b == c || b == d) { p = 1000 + (b * 100); }
				else if (c == d) { p = 1000 + (c * 100); }
				else {
					a = (a > b) ? a : b;
					a = (a > c) ? a : c;
					a = (a > d) ? a : d;
					p = a * 100;
				}
			}
		}
	}
	return p;
}

int main(int argc, char* argv[]) {
	int a, b, c, d, e = 0, n;
	scanf("%d", &n);
	for (int m = 0; m < n; m++) {
		scanf("%d %d %d %d", &a, &b, &c, &d);
		e = (e > s(a, b, c, d)) ? e : s(a, b, c, d);
	}
	printf("%d", e);
	return 0;
}
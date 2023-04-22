#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int s(int a, int b, int c, int d) {
	int o = (a == b && a == c && a == d && b == c && b == d && c == d) ? 1 : 0;
	int p = 0;
	if (o == 1) { p = 50000 + (a * 5000); }							// (1 1 1 1)	// [주사위 4개가 전부 같은 눈의 값이다.]
	else {
		if ((a == b && a == c && b == c) ||						// (1 1 1 0)	// [주사위 4개 중에, 3개가 같은 눈의 값이다.]
			(a == b && a == d && b == d) ||						// (1 1 0 1)
			(a == c && a == d && c == d)) { p = 10000 + (a * 1000); }		// (1 0 1 1)
		else if (b == c && b == d && c == d) { p = 10000 + (b * 1000); }		// (0 1 1 1)
		else {
			if ((a == b && c == d) ||						// (1 1 2 2)	// [주사위 4개 중에, 2개 씩 짝을 지었을 때,]
				(a == c && b == d)) { p = 2000 + (a * 500) + (d * 500); }	// (1 2 1 2)	// [짝끼리 같은 눈의 값이다.]
			else if (a == d && b == c) { p = 2000 + (a * 500) + (b * 500); }	// (1 2 2 1)
			else {
				if (a == b || a == c || a == d) { p = 1000 + (a * 100); }	// (1 2 2 2)	// [주사위 4개 중에, 2개가 같은 눈의 값이다.]
				else if (b == c || b == d) { p = 1000 + (b * 100); }		// (0 1 2 2)
				else if (c == d) { p = 1000 + (c * 100); }			// (0 0 1 2)
				else {
					a = (a > b) ? a : b;							// [주사위 4개 중에, 가장 큰 눈의 값을 고른다.]
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
/* ■ 설명 ■
 (1 : 참 / 0 : 거짓 / 2 : 또 다른 참)
*/

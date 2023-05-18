#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long s(long long n) {
	if (n <= 1) { return 1; }
	return (n * s(n - 1));
}

int main() {
	long long n;
	scanf("%lld", &n);
	printf("%lld", s(n));
	return 0;
}
/* ■ 설명 ■
재귀 함수의 기능을 사용한 간단한 예제
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	// 문자열 비교 (strcmp, strncmp) 다른 하나는 특정 문자열 위치 비교
#include <stdlib.h>	// 메모리 동적 할당 (malloc, free)

int main() {
	char c[8] = ""; int a, b, q = -1;
	scanf("%d", &a);
	int* p = (int*)malloc(sizeof(int) * a + 1);
	for (int n = 0; n < a; n++) {
		scanf("%s", &c);
		
		if (!strcmp(c, "push")) {
			scanf("%d", &b);
			p[++q] = b;
		}
		else if (!strcmp(c,"pop")) {
			if (q != -1) { printf("%d\n", p[q]); p[q--] = 0; }
			else { printf("-1\n"); }
		}
		else if (!strcmp(c, "size")) {
			if (q != -1) { printf("%d\n", q + 1); }	// 굳이 이것을 if 문으로 만들어둔 이유는
			else { printf("0\n"); }			// [4ms] 시간 조차 단축하기 위함
		}
		else if (!strcmp(c, "empty")) {
			if (q != -1) { printf("0\n"); }
			else { printf("1\n"); }
		}
		else if (!strcmp(c, "top")) {
			if (q != -1) { printf("%d\n", p[q]); }
			else { printf("-1\n"); }
		}
	}
	free(p);
	return 0;
}
/* ■ 설명 ■
전형적인 스택(stack) 함수를 구현한 코드이다.
*/

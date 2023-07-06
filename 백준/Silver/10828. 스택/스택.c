#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char c[8] = ""; int a, b, q = -1;
	scanf("%d", &a);
	int* p = (int*)malloc(sizeof(int) * a + 1);
	for (int n = 0; n < a; n++) {
		scanf("%s", &c);
		strcmp(c, "push");
		if (!strcmp(c, "push")) {
			scanf("%d", &b);
			p[++q] = b;
		}
		else if (!strcmp(c,"pop")) {
			if (q != -1) { printf("%d\n", p[q]); p[q--] = 0; }
			else { printf("-1\n"); }
		}
		else if (!strcmp(c, "size")) {
			if (q != -1) { printf("%d\n", q + 1); }
			else { printf("0\n"); }
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
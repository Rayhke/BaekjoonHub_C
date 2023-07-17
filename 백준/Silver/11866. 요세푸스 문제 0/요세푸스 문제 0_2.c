#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// mallic (메모리 동적 할당)

int main() {
	int a, size, kick;
	scanf("%d %d", &size, &kick);

	
	int* p = (int*)malloc(sizeof(int) * size);				// ◆ 만약 임의로 사람 번호를 매기고 싶다면
	for (int n = 0; n < size; n++) { p[n] = n + 1; }			// for (int n = 0; n < size; n++) { scanf_s("%d", &p[n]); }

	
	for (int n = 0; n < size; n++) {					// [size] 인원 수 만큼 반복되며,
		for (int m = 0; m < kick - 1; m++) {				// [kick] 번 째 사람을 지목할 때 까지, 큐(Queue)의 방식으로 원소를 빼고 넣는다.
			a = p[n];
			for (int l = n; l < size - 1; l++) { p[l] = p[l + 1]; }	// 당겨오는 절차
			p[size - 1] = a;
		}
	}

	
	printf("<");
	for (int n = 0; n < size; n++) {
		printf("%d", p[n]);
		if (n + 1 != size) { printf(", "); }
	}
	printf(">");
	free(p);
	return 0;
}
/* ■ 설명 ■

*/

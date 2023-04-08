#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	  int a, b;
	  scanf("%d %d", &a, &b);
	  printf("%d", a + b);
	  return 0;
}
/* ■ 설명 ■
정수형 데이터 4바이트 크기인 [int] 를 가진 변수 a, b 선언 후
[scanf] 명령문으로 변수 a, b에 값을 담아 넣고,
[printf] 명령문으로 명령문 고유의 기능인 [%d]로
변수 a, b 값을 더한 후 출력
*/

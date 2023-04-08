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

추가로 비주얼 스튜디오에서는 [scanf] 명령문을 쓸 시에 보안 문제 경고로
작동 되지 않으므로 [scanf_s] 를 사용해야 하지만,
명령문 [scanf_s] 는 비주얼 스튜디오 이외에는 존재하지 않는 표준 명령문이기에
헤더파일 선언보다 가장 위에
[#define _CRT_SECURE_NO_WARNINGS] 를 선언하면 [scanf] 를 정상적으로 사용 가능하다.
*/

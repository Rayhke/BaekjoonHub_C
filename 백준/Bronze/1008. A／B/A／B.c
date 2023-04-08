#define _CRT_SECURE_NO_WARNINGS		// '비주얼 스튜디오' 기준으론 [scanf] 함수를 사용 시 보안 상의 문제로 [scanf_s] 함수로 대체하는 데,
#include <stdio.h>			// 이 함수는 '비주얼 스튜디오'에만 존재하기 때문에, 만약 다른 프로그램으로 [scanf_s] 함수를 사용 시
					// 작동되지 않는 문제를 겪을 수 있으므로, 훗날 작업 환경의 여러 방면을 고려하여 코드 최상단에
int main() {				// 선행 처리기인 [#define _CRT_SECURE_NO_WARNINGS] 를 입력하여 [scanf] 함수 사용 시 보안 경고를 무시하자
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%.10f", (double)a / b);
	return 0;
}
/* ■ 설명 ■
[printf] 출력 함수의 서식 문자인 [%f] 의 '%' 와 'f' 사이에 ' . ' 점을 넣은 후에
점 위치 앞에 값을 넣으면 [%5.f] (정수 부분)을 5자리 출력 되도록 하고,
점 위치 뒤에 값을 넣으면 [%.5f] (소수점 부분)을 5자리 출력 되게 한다.
*/

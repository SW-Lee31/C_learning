#include <stdio.h>
#include <ctype.h>
#include "lotto.h"
#ifndef MAX
#define MAX 5  // 최대 게임수
#endif
#define game_count(count) count > MAX ? MAX : count   // MAX보다 크면 MAX게임만 실행 메크로 함수

int main() {

	int count = 0;
	char game[3];
	while (1) {
		printf("게임수를 입력하세요(0:종료, 1~5) : ");
		gets_s(game, sizeof(game));
		if (isdigit(game[0])) {   // 입력받은 값이 숫자인지 판단
			count = atoi(game);       // 문자를 숫자로 변환
			if (count == 0) {   // 0이면 종료
				printf("프로그램을 종료합니다.\n");
				break;
			}
			else {   // 0이 아니면
				if (count > MAX) {   // 최대 게임수 보다 크게 입력하면
					printf("%d 게임만 실행합니다.\n",MAX);  
				}
				count = game_count(count);   // // MAX보다 크면 MAX게임만 실행, 매크로 함수 호출
				lotto(count);  // 로또 번호 발생
			}
		}
		else {  // 숫자가 아니면 다시 입력
			printf("숫자를 입력하세요~~\n");
		}
	}
}
#pragma once
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define COUNT 7
int number[COUNT];   // 번호 6개 + 보너스번호 1개
int check(int num);
void gen_number();
void sorting();

void lotto(int count)
{
    srand(time(0));   // 난수 시작값 설정
    for (int cnt = 0; cnt < count; cnt++) {   // 게임수 만큼 반복
        gen_number();           // 번호 발생
        sorting();                  // 오름차순 정렬
        for (int i = 0; i < COUNT; i++) {          // 화면 출력
            printf("%3d", number[i]);
        }
        printf("\n");
    }
}
void gen_number() {   // 번호 발생
    int cnt = 0;
    for (int i = 0; i < COUNT; i++) number[i] = 0;   // 배열 초기화
    while (cnt < COUNT) {               // 7개 숫자 발생을 위한 반복
        int num = rand() % 45 + 1;    // 난수 발생(0~44) + 1
        if (check(num)) {                  // 동일한 번호가 배열에 있는지 검사
            number[cnt] = num;        // 배열에 동일한 번호가 없으면 배열에 난수 저장
        } 
        else {       // 동일한 번호가 배열에 있으면
            continue;    // 난수 발생 처음으로 반복
        }
        cnt++;   // 다음 난수 발생을 위한 배열 첨자 증가
    }
}
int check(int num) {   // 동일한 숫자가 배열에 있는지 검사
    int result = 1;       // 결과는 기본적으로 참
    for (int i = 0; i < COUNT; i++) {   // 배열 반복
        if (number[i] == num) {       // 동일한 숫자가 있으면
            result = 0;                    // 결과는 거짓
            break;                         // 반복 종료
        }
    }
    return result;               // 동일한 숫자가 없으면 참(1), 있으면 거짓(0) 반환
}
void sorting() {                  // 배열의 마지막(보너스 숫자)을 제외하고 오름차순 정렬
    for (int i = 0; i < COUNT - 1; i++) {
        for (int j = i + 1; j < COUNT - 1; j++) {
            if (number[i] > number[j]) {
                int temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
    }
}
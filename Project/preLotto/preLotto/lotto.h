#pragma once
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define COUNT 7
int number[COUNT];   // ��ȣ 6�� + ���ʽ���ȣ 1��
int check(int num);
void gen_number();
void sorting();

void lotto(int count)
{
    srand(time(0));   // ���� ���۰� ����
    for (int cnt = 0; cnt < count; cnt++) {   // ���Ӽ� ��ŭ �ݺ�
        gen_number();           // ��ȣ �߻�
        sorting();                  // �������� ����
        for (int i = 0; i < COUNT; i++) {          // ȭ�� ���
            printf("%3d", number[i]);
        }
        printf("\n");
    }
}
void gen_number() {   // ��ȣ �߻�
    int cnt = 0;
    for (int i = 0; i < COUNT; i++) number[i] = 0;   // �迭 �ʱ�ȭ
    while (cnt < COUNT) {               // 7�� ���� �߻��� ���� �ݺ�
        int num = rand() % 45 + 1;    // ���� �߻�(0~44) + 1
        if (check(num)) {                  // ������ ��ȣ�� �迭�� �ִ��� �˻�
            number[cnt] = num;        // �迭�� ������ ��ȣ�� ������ �迭�� ���� ����
        } 
        else {       // ������ ��ȣ�� �迭�� ������
            continue;    // ���� �߻� ó������ �ݺ�
        }
        cnt++;   // ���� ���� �߻��� ���� �迭 ÷�� ����
    }
}
int check(int num) {   // ������ ���ڰ� �迭�� �ִ��� �˻�
    int result = 1;       // ����� �⺻������ ��
    for (int i = 0; i < COUNT; i++) {   // �迭 �ݺ�
        if (number[i] == num) {       // ������ ���ڰ� ������
            result = 0;                    // ����� ����
            break;                         // �ݺ� ����
        }
    }
    return result;               // ������ ���ڰ� ������ ��(1), ������ ����(0) ��ȯ
}
void sorting() {                  // �迭�� ������(���ʽ� ����)�� �����ϰ� �������� ����
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
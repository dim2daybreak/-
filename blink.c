#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <windows.h> // Windows ��������ʱ
#else
#include <unistd.h>  // Linux/Mac ��������ʱ
#endif

void delay(int milliseconds) {
    #ifdef _WIN32
    Sleep(milliseconds); // Windows ����ʱ����
    #else
    usleep(milliseconds * 1000); // POSIX ϵͳ���� Linux/Mac������ʱ����
    #endif
}

void simulate_led(int state) {
    if (state) {
        printf("LED ON  - ���ܼҾӵ��ѿ���\n");
    } else {
        printf("LED OFF - ���ܼҾӵ��ѹر�\n");
    }
}

int main() {
    printf("���ܼҾ� LED ģ�����ʼ����...\n");
    int count = 0;

    while (count < 8) { // ģ�� 8 ����˸!!!!!!!!!!!!!!!���������һ���汾�������޸ģ���������������������
        simulate_led(1); // LED ��
        delay(500);      // ��ʱ 500 ����
        simulate_led(0); // LED ��
        delay(500);      // ��ʱ 500 ����
        count++;
    }

    printf("ģ�������\n");
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <windows.h> // Windows 下用于延时
#else
#include <unistd.h>  // Linux/Mac 下用于延时
#endif

void delay(int milliseconds) {
    #ifdef _WIN32
    Sleep(milliseconds); // Windows 的延时函数
    #else
    usleep(milliseconds * 1000); // POSIX 系统（如 Linux/Mac）的延时函数
    #endif
}

void simulate_led(int state) {
    if (state) {
        printf("LED ON  - 智能家居灯已开启\n");
    } else {
        printf("LED OFF - 智能家居灯已关闭\n");
    }
}

int main() {
    printf("智能家居 LED 模拟程序开始运行...\n");
    int count = 0;

    while (count < 8) { // 模拟 8 次闪烁!!!!!!!!!!!!!!!我相比于上一个版本进行了修改！！！！！！！！！！！
        simulate_led(1); // LED 开
        delay(500);      // 延时 500 毫秒
        simulate_led(0); // LED 关
        delay(500);      // 延时 500 毫秒
        count++;
    }

    printf("模拟结束！\n");
    return 0;
}


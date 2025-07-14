#include <stdio.h>

int main(void) {
    int ch;  // 必须是 int 才能判断 EOF
    signed char checksum = -1;

    while ((ch = getchar()) != EOF) {   
        // 这里发生溢出就自动 wrap around              
        checksum = checksum + ch;      // 累加 checksum
    }

    printf("%d\n", (int)checksum);     // 打印 checksum 并换行
    return 0;
}

#include <stdio.h>
int main() {
    //ระบุ n
    int n = 50;
    scanf("%d", &n);

    //คำนวณ
    int i = 0, sum = 0;
    while (i < n) {
        i++;
        sum += i;
    }

    //คำตอบ
    printf("%d", sum);
}

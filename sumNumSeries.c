#include <stdio.h>
int main() {
    //�к� n
    int n = 50;
    scanf("%d", &n);

    //�ӹǳ
    int i = 0, sum = 0;
    while (i < n) {
        i++;
        sum += i;
    }

    //�ӵͺ
    printf("%d", sum);
}

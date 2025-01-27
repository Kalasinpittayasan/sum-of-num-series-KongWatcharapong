#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int i = 0, sum = 0;
    while (i < n) {
        i++;
        sum += i;
    }
    printf("%d", sum);
}

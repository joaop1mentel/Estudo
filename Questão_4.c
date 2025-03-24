#include <stdio.h>
#include <stdlib.h>
void decimal(int n) {
    if (n > 0) {
        decimal(n / 2);
        printf("%d", n % 2);
    }
}

int main() {
    int dec;

    printf("Digite um inteiro na sua forma decimal:\n");
    scanf("%d", &dec);

    if (dec == 0) {
        printf("0");
    } else {
        decimal(dec);
    }

    printf("\n");
    return 0;
}

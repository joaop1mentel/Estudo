#include <stdio.h>
#include <stdlib.h>

int iterativa(int n) {
    int count = 0;
    if (n < 0) {
        n = -n;
    }
    if(n==0){
        return 1;
    }

    return count;

    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}
int main() {
    int n;
        printf("digite um numero para registrar no vetor:");
        scanf("%d", &n);
        printf("Iterativo: %d digitos\n", iterativa(n));
        printf("-\n");
    return 0;
}

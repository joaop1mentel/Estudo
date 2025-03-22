#include <stdio.h>
#include <stdlib.h>

int Recursiva(int n) {
    if(n==0){
        return 0;
    }
        return 1+Recursiva(n/10);
}
int main() {
    int n;
        printf("digite um numero para registrar no vetor:");
        scanf("%d", &n);
        printf("Iterativo: %d digitos\n", Recursiva(n));
        printf("-\n");
    return 0;
}


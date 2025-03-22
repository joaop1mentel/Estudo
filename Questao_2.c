#include <stdio.h>
#include <stdlib.h>

void inverte(int v[],int ini,int fim){
    int aux;
    if(ini<fim){
            aux = v[ini];
            v[ini] = v[fim];
            v[fim] = aux;
            inverte(v,ini+1,fim-1);
    }
}
void imprimir(int v[],int n){
    if(n==1){
        printf(" %d", v[n-1]);

    }
    else{
        imprimir(v,n-1);
        printf(" %d", v[n-1]);
    }
}

int main(){
    int n;
    int t=100;
    int v[t];
    printf("Digite quantos numeros deseja max %d: \n",t);
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("digite o %d numero para registrar no vetor:",i);
        scanf("%d", &v[i]);
    }
    inverte(v,0,n-1);
    imprimir(v,n);
    return 0;
}

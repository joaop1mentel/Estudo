#include <stdio.h>
#include <stdlib.h>

int recursiva(int v[], int n){
    if(n > 0){

         return v[n-1]+recursiva(v,n-1);

    }

   else{

       return 0;

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
    int soma = recursiva(v,n);
    printf("%d", soma);

    return 0;
}

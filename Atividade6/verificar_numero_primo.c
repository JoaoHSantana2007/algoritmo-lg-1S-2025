#include <stdio.h>
#include <math.h>

int nprimo(int n){

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return 0;
        }
    }

    return 1;
}

int main(){
    
    int n;

    printf("Qual numero de seja verificar se eh primo: ");
    scanf("%d", &n);

    if(nprimo(n)){
        printf("O numero %d eh primo\n", n);
    }else{
        printf("O numero %d nao eh primo\n", n);
    }
    
    return 0;
} 
#include <stdio.h>

int main(int argc, char* argv[]){

    char opcao_a;
    float L,I ; 

        printf("escolha o tipo de filme\n");
        printf("L - Leve\n");
        printf("I - Intenso\n");

        scanf("%f", &opcao_a);
    
        switch(opcao_a);
            Case 'L':
            char opcao_a1;
            float C,A;
            printf("C - comedia\n");
            printf("A - animacao\n");
            scanf("%f", &C,A);
            
      
            if(C){
            printf("filme recomendado: As branquelas\n");
            }
            if(A){
            printf("filme recomendado: Toy Story\n");
            }
        break;
    return 0;
}

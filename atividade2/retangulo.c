#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    //Digite o valaorda altura e da base do retangulo

        float H;

            printf("Digite o valor da altura: ");
            scanf("%f", &H);
        
        float B;

            printf("Digite o valor da base: ");
            scanf("%f", &B);
   
    //computador entende o valor da altura e da base do retangulo 

        printf("\n");
        printf("O valor da altura he:%f", H);

        printf("\n");
        printf("O valor da base he:%f", B);
    
   //calculo da área

        printf("\n");

        float area;
        area = H * B;

            printf("\n");
            printf("O valor da area he:%f", area);
    
    return 0;
}
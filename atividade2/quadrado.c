#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    //Digite o lado do quadrado 

        float L;

            printf("Digite o valor do Lado: ");
            scanf("%f", &L);

    //computador entende o valor do lago do quadrado

        printf("\n");
        printf("O valor do lado he:%f", L);

    //calculo da área

        printf("\n");

        float area;
        area =  pow(L,2);

            printf("\n");
            printf("O valor da area he:%f", area);
    
    return 0;
}
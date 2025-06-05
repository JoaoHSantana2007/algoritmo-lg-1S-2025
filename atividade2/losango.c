#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    printf("losango.c\n");

    //Digite a diagonal maior do losango 

        float D; 

            printf("\n");
            printf("Digite a diagonal maior do losango: ");
            scanf("%f", &D);

    //Digite a diagonal menor do losango 

        float d; 

            printf("Digite a diagonal menor do losango: ");
            scanf("%f", &d);

    //Computador entende o valor das diagonais do losango

        printf("\n");
        printf("O valor da diagonal maior he: %f", D);
        printf("\n");
        printf("O valor da diagonal menor he: %f", d);

    //Calculo da área 
        printf("\n");

        float area;
        area = (D * d) / 2;

            printf("\n");
            printf("O valor da area he: %f", area);

    return 0;

}
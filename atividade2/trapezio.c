#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    //Digite o valaorda altura, base-maior e menor do trapezio

        float H;

            printf("Digite o valor da altura: ");
            scanf("%f", &H);
        
        float B;

            printf("Digite o valor da base maior: ");
            scanf("%f", &B);

        float b;

            printf("Digite o valor da base menor: ");
            scanf("%f", &b);

    //computador entende o valaorda altura, base-maior e menor do trapezio

        printf("\n");
        printf("O valor da altura he:%f", H);

        printf("\n");
        printf("O valor da base maior he:%f", B);

        printf("\n");
        printf("O valor da base menor he:%f", b);

    //calculo da área

        printf("\n");

        float area;
        area = ((B + b) * H) / 2;

            printf("\n");
            printf("O valor da area he:%f", area);
    
    return 0;

}
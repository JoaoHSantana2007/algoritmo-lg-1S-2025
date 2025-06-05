#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    printf("circulo.c\n");

    //Digite o raio do circulo 

        float r; 

            printf("\n");
            printf("Digite o raio do circulo: ");
            scanf("%f", &r);

    //Computador entende o valor do raio  do circulo

        printf("\n");
        printf("O valor do raio he: %f", r);

    //Calculo da área 
        printf("\n");

        float area;
        area = M_PI * pow(r,2);

            printf("\n");
            printf("O valor da area he: %f", area);

    return 0;
}
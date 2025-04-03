#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    //Digite o raio do circulo 

        float r; 

            printf("Digite o raio do circulo: ");
            scanf("%f", &r);

    //Computador entende o valor do raio  do circulo

        printf("\n");
        printf("O valor do raio he: %f", r);

    //Calculo da área 
        printf("\n");

        float pi;
        pi = 3.14;

        float area;
        area = pi * pow(r,2);

            printf("\n");
            printf("O valor da area he: %f", area);

    return 0;
}
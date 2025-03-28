#include <stdio.h>
#include <stdalign.h>
#include <windows.h>
#include <math.h>

int main(int argc, char* argv[]){
    
        
        float altura;
        
            printf("Digite a altura: ");
            scanf("%f", &altura);
        
        float peso;
           
            printf("Digite o peso: ");
            scanf("%f", &peso);

        printf("\n");
    
        printf("a altura eh %f\n", altura);
        printf("O peso eh %f\n", peso);

        printf("\n");

        float imc;

            imc = peso / (pow(altura,2));

        printf("O valor do IMC he: %f", imc);

        float a;

            a = imc < 18,5;

        float b;

            b = 18,6 < imc < 24,9 ;

        float c;

            c = 25,0 < imc < 29,9 ;

        float d;

            d = 30,0 < imc < 34,9 ;

        float e;

            e = 35,0 < imc < 39,9 ;

        float f;

            f = 40,0 < imc;
 
    return 0;
    
}
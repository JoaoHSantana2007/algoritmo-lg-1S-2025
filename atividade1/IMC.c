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

        if(imc < 18.5){

            printf("\n");
            printf("\nIMC abaixo do normal!");
        }
        if(18.50 < imc && imc < 24.99){

            printf("\n");   
            printf("\nIMC Normal!");
        }
        if(25.00 < imc && imc < 29.99){

            printf("\n");   
            printf("\nIMC acima do peso!");
        }
        if(30.00 < imc && imc < 34.99){

            printf("\n");   
            printf("\nIMC aobsidade grau 1!");
        }
        if(35.00 < imc && imc < 39.99){

            printf("\n");   
            printf("\nIMC aobsidade grau 2!");
        }
        if(35.00 < imc && imc < 39.99){

            printf("\n");   
            printf("\nIMC aobsidade grau 2!");
        }
        if(40.00 < imc){

            printf("\n");   
            printf("\nIMC aobsidade grau 3!");
        }

    return 0;
    
}
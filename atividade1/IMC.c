#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
    
    //digitando a altura 
     
        float altura;
        
            printf("Digite a altura: ");
            scanf("%f", &altura);
    
    //dgitando o peso   
    
        float peso;
           
            printf("Digite o peso: ");
            scanf("%f", &peso);

        printf("\n");
    
    //computador entende a altura e o peso 
     
        printf("a altura eh %f\n", altura);
        printf("O peso eh %f\n", peso);

        printf("\n");

    //calculo do IMC
        float imc;

            imc = peso / (pow(altura,2));

        printf("O valor do IMC he: %f", imc);
    
    //tipos de IMC
        
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
            printf("\nIMC obesidiade!");
        }
        if(30.00 < imc && imc < 34.99){

            printf("\n");   
            printf("\nIMC obesidade grau 1!");
        }
        if(35.00 < imc && imc < 39.99){

            printf("\n");   
            printf("\nIMC obesidade grau 2!");
        }
        if(40.00 < imc){

            printf("\n");   
            printf("\nIMC obesidade grau 3!");
        }

    return 0;
    
}
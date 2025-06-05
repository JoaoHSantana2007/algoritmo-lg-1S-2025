#include <stdio.h>
#include <stdalign.h>
#include <windows.h>

int main(int argc, char* argv[]){
    
    //Digite a idade
        
        int idade;

            printf("digite a idade: ");
            scanf("%d", &idade);

    //Digite a altura     
        
        float altura;

            printf("Digite a altura: ");
            scanf("%f", &altura);

    //Digite o peso
        
        float peso;
        
            printf("Digite o peso: ");
            scanf("%f", &peso);
    
    //Coputador entende a idade,altura e peso
        
            printf("A idade eh %d\n" , idade );
            printf("a altura eh %.2f\n", altura);
            printf("O peso eh %.2f\n", peso);

    //Calculo dobro de peso

            float dobro_peso = peso * 2.0;
            printf("O dobro do peso eh %.2f", dobro_peso);
 
    return 0;
    
}
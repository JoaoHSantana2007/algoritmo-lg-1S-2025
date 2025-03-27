#include <stdio.h>

int main(int argc, char* argv[]){
    
    int idade;
    float altura;
    float peso;
    
    printf("digite a idade: ");
    scanf("%d", &idade);
   
    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite o peso: ");
    scanf("%f", &peso);
    
    printf("A idade eh %d\n" , idade );
    printf("a altura eh %.2f\n", altura);
    printf("O peso eh %.2f\n", peso);

    float dobro_peso = peso * 2.0;
    printf("O dobro do peso eh %.2f", dobro_peso);
 
    return 0;
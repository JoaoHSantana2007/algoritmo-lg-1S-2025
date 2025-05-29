#include <stdio.h>

/*
Declaracao de funcao
A funcao tem por objetivo: ler um valor dentre 2 opcaoes validas 
A funcao deve retornar o valor valido lido*
*/

int ler_valor_valido(int opcao1, int opcao2, char* texto_opcao1, char* texto_opcao2, char* texto_adicional){
    //codigo da funcao
    int opcao_valida;

    do{
        printf("Escolha uma opcao:\n%d - %s\n%d - %s\n", opcao1, texto_opcao1, opcao2, texto_opcao2);
        scanf("%d", &opcao_valida);
    }while(opcao_valida != opcao1 && opcao_valida != opcao2);

    return opcao_valida;
}

int main(int argc, char *argv){

    int opcao, resposta;

    opcao = ler_valor_valido(1, 0, "Iniciar quiz", "sair", "");

    if(opcao == 1){
        resposta = ler_valor_valido(1, 2, "Rio de janeiro", "Brasilia", "Qual eh a capital do brasil?");

        if(resposta == 2){
            printf("Voce acertou!");
        }else{
            printf("Voce errou!\nPode melhorar!");
        
        }
        resposta = ler_valor_valido(3, 4, "Moscow", "Brasilia", "Qual eh a capital do Russia?");

        if(resposta == 3){
            printf("Voce acertou!\n");
        }
        else {
            printf("Pode melhorar!\n");
        }
    
    }    

    return 0;
}
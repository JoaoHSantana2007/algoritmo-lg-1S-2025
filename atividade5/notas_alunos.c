#include <stdio.h>

int main(int argc, char* argv[]){
    
        printf("Ola professor!\n\n");
        
        int i = 0;
        int qtdlunos;
            
            printf("Digite o numero de alunos: ");
            scanf("%d", &qtdlunos);

            float notas[qtdlunos];
            for(i = 0; i < qtdlunos; i ++){
                printf("Digite a nota dos alunos %d: ", i+1);
                scanf("%f", &notas[i]);   
            }
            for(i = 0; i < qtdlunos; i ++){
                printf("\nNota aluno %d: %.2f ", i, notas[i]);
            }
            
    
    return 0;

}

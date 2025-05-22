#include <stdio.h>

#define TAM_NOME 64

typedef struct Aluno{
    char nome[TAM_NOME];
    float nota;
}Aluno;

void imprimir_aluno(Aluno a){
    printf("Nome: %sNome: %.2f\n\n", a.nome, a.nota);
}

int main(int argc, char* argv[]){
    int n = 5;
    float soma, media, max=0, min=10;
    Aluno alunos[n];

    for(int i=1; i <= n; i++){
        do{
            printf("Digite o nome do aluno %d: ", i);
            fgets(alunos[i].nome, TAM_NOME, stdin); 
            printf("Digite a nota do aluno %d: ", i);
            scanf("%f", &alunos[i].nota);
            getchar();
            if(alunos[i].nota < 0 || alunos[i].nota > 10){
                printf("Erro\nDigite uma nota valida entre 0 e 10");
            }else{
                if(alunos[i].nota > max){
                    max = alunos[i].nota;
                }
                if(alunos[i].nota < min){
                    min = alunos[i].nota;
                }
                soma =+ alunos[i].nota;
            }
        }while(alunos[i].nota < 0 || alunos[i].nota > 10); 
    }   
    media = soma / n;

    printf("A maior nota eh: %s\n", max);
    printf("A menor nota eh: %s\n", min);
    printf("A media nota eh: %s\n", media);

    
    
    return 0;   
}

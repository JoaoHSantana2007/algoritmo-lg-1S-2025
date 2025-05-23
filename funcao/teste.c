#include <stdio.h>
#include <string.h>
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
    float soma, max=0.0, min=10.0;
    int maxAL, minAL;
    Aluno alunos[n];

    for(int i=0; i <= n; i++){
        do{
            printf("\nDigite o nome do aluno %d: ", i);
            fgets(alunos[i].nome, TAM_NOME, stdin); 
            printf("Digite a nota do aluno %d: ", i);
            scanf("%f", &alunos[i].nota);
            getchar();
            if(alunos[i].nota < 0 || alunos[i].nota > 10){
                printf("\nErro\nDigite uma nota valida entre 0 e 10");
            }else{
                if(alunos[i].nota > max){
                    max = alunos[i].nota;
                    maxAL = i;
                }
                if(alunos[i].nota < min){
                    min = alunos[i].nota;
                    minAL = i;
                }
                soma =+ alunos[i].nota;
            }
        }while(alunos[i].nota < 0 || alunos[i].nota > 10); 
    }   
    float media = soma / n;

    printf("\nO aluno com a maior nota eh: %s", alunos[maxAL].nome);
    printf("A sua nota foi: %2.f\n", max);
    printf("\nO aluno com a menor nota eh: %s", alunos[minAL].nome);
    printf("A sua nota foi: %2.f\n", min);
    printf("\nA media dos alunos eh: %.2f\n", media);

    return 0;   
}

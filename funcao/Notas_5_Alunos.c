#include <stdio.h>
#include <string.h>
#include <math.h>
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
    float soma=0, media, max=0.0, min=10.0;
    char maxAL, minAL;
    Aluno alunos[n];

    for(int i=1; i <= n; i++){
        printf("\nDigite o nome do aluno %d: ", i);
        fgets(alunos[i].nome, TAM_NOME, stdin); 
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &alunos[i].nota);
        getchar();
    }    
    for(int i=1; i<= n; i++){  
                if(alunos[i].nota > max){
                    max = alunos[i].nota;
                    maxAL = i;
                }
                if(alunos[i].nota < min){
                    min = alunos[i].nota;
                    minAL = i;
                }
                soma =+ alunos[i].nota;
                media = soma / n;
            }

    printf("\nO aluno com a maior nota eh: %s", alunos[maxAL].nome);
    printf("A sua nota foi: %2.f\n", max);
    printf("\nO aluno com a menor nota eh: %s", alunos[minAL].nome);
    printf("A sua nota foi: %2.f\n", min);
    printf("\nA media dos alunos eh: %.2f\n", media);

    return 0;   
}

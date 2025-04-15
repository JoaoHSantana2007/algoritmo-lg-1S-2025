#include <stdio.h>

int main(int argc, char* argv[]){
    
        printf("Ola professor!\n\n");
        
        int i = 0;
        int alunos, ap, k, p;
        float soma, media, maxn = 0, minn = 10;


            printf("Digite o numero de alunos: ");
            scanf("%d", &alunos);

            float notas[alunos];
                
                for(i ; i < alunos; i ++){

                    do{   
                        printf("Digite a nota dos alunos %d: ", i+1);
                        scanf("%f", &notas[i]);
                        if(notas[i] < 0 || notas[i] > 10 ){
                            printf("notas invalida por favor tente do novo.");
                        }
                        else{
                            if(notas[i] > maxn){
                                maxn = notas[i];
                            }
                            if(notas[i] < minn){
                                minn = notas[i];
                            }
                            if(notas[i] >= 6.0){
                                ap ++; 
                            }
                            soma += notas[i];
                        }
                    }while(notas[i] < 0 || notas[i] > 10);
                }
            
            media = soma / alunos;

            printf("\nMedia geral da turma he: %f\n",media);
            printf("maior nota da turma he: %f\n",maxn);
            printf("Menor nota da turma he: %f\n",minn);
            printf("Numero de aprovados da turma he: %d\n",ap);

            printf("Deseja saber a nota de um aluno especifico?\n1 - sim\n2 - nao\n");
            scanf("%d", &p);
            if(p == 1){
                printf("Qual aluno que deseja saber a nota? ");
                scanf("%d", &k);
                if(k < 1 || k > alunos){
                    printf("Este aluno nao foi encontrado");
                }else{
                    printf("A nota do aluno %d he: %f", k, notas[k - 1]);
                }
            }
            if(p == 2){
                printf("tudo bem, caso presice execute o codigo novamente");
            }

    return 0;

}

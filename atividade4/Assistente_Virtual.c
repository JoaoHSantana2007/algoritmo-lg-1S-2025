#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

    printf("Ola usario!\n\n");
    
    //1 
    int leveintenso;
        printf("Qual de tipo de filme deseja assistir:\n1 - Leve\n2 - Intenso\n\n");
        scanf("%d", &leveintenso);

    //2.1 
        if (leveintenso == 1){
        
            int comediaanimacao;
            printf("Esolha o tipo de filme leve que desaja assistir\n1 - Comedia\n2 - Animacao\n\n");
            scanf("%d", &comediaanimacao);
        //3.1
            if(comediaanimacao == 1){     
                printf("Assistir filme 'As branquela'\n\n\n");
            }
        //3.2
            if(comediaanimacao == 2){    
                printf("Assistir filme 'Toy Story'\n\n\n");
            }
    }
    //paso 2.2
        if(leveintenso == 2){
            int terroracao;
            printf("Esolha o tipo de filme intenso que desaja assistir\n1 - Terror\n2 - Acao\n\n");
            scanf("%d", &terroracao);
            //3.3
            if(terroracao == 1){
                int psicologicosobreantural;
                printf("Esolha o tipo de filme terror que desaja assistir\n1 - Terror psicologico\n 2 - Terror sobrenatural\n\n");
                scanf("%d", &psicologicosobreantural);  
                //4.1
                if(psicologicosobreantural == 1){
                    printf("Assistir filme 'Corra!'\n\n\n");
                }
                //4.2
                if(psicologicosobreantural == 2){
                    printf("Assistir filme 'Invocacao do mal'\n\n\n");
                }
            }    
            //3.4
            if(terroracao == 2){
                int super_heroisaventura_realista;
                printf("Esolha o tipo de filme terror que desaja assistir\n1 - Super-Herois\n2 - Aventura realista\n\n");
                scanf("%d", &super_heroisaventura_realista);
                //4.3
                if(super_heroisaventura_realista == 1){
                    printf("Assistir filme 'Vingadores:Ultimato'\n\n\n");
                }
                //4.4
                if(super_heroisaventura_realista == 2){
                    printf("Assistir filme 'Mad Max: Estrada Furia'\n\n\n");
                }
                
            }
        }
    
        return 0;
}

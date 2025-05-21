
// Maior
    //retorna o mairo entre dois numeros inteiros.
        int  maior_2n(int a, int b){

            if(a > b){
                return a;
            }
            else{
                return b;
            }
        }


    //Retorna o maior entre tres numeors inteiros
        int  maior_3n(int a, int b, int c){
            return maior_2n(maior_2n(a,b),c);
        }

//Menor
    //retorna o menor entre dois numeros inteiros.

        int  menor_2n(int x, int y){

            if(x < y){
                return x;
            }
            else{
                return y;
            }
        }

    //Retorna o maior entre tres numeors inteiros
    
        int  menor_3n(int x, int y, int z){

            return menor_2n(menor_2n(x,y),z);
        }
/*
    retorna o mairo entre dois numeros inteiros.
*/
int  maior_2n(int a, int b){

    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

/*
    Retorna o maior entre tres numeors inteiros
*/
int  maior_3n(int a, int b, int c){
    return maior_2n(maior_2n(a,b),c);
}



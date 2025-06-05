#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char* argv[]){

    int n = 0;
    do {

        printf("%d\n", n);
        n++;
        Sleep(120);
    
    } while (n <= 100);

    //outra forma 
    /*for(int n = 0; n <= 100; n ++){

        printf("%d\n", n);

    }*/
    
    return 0;
}

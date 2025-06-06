#include <stdio.h>

#define MAX 255

//GLOBAL
int y = 1;

void incrementaX(int* x){
    //LOCAL
    while (*x < 5){
        y++;
        *x = 11;
    }
}

int main(){
    int z = 1;

    incrementaX(&z);

    printf("\ny = %d\n", y);
    printf("z = %d\n", z);

    printf("\n*z = %p\n", &z);
    printf("*y = %p\n\n", &y);

    return 0;
}
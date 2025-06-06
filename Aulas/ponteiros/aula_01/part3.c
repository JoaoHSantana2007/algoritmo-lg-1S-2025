#include <stdio.h>

int y = 1;

void incremento(){
    int x = 1;

    while (x < 5){
        x++;
        y++;
    }
}

int main(){

    printf("y = %d\n", y);

    return 0;
}
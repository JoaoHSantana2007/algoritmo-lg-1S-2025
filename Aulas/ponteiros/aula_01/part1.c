#include <stdio.h>

int main(){
    int x = 3;

    while (x < 5){
        if(x % 2 == 0){
            x = x + 2;
        }else{
            x--;
        }
    }

    printf("x = %d\n", x);
    
    return 0;
}
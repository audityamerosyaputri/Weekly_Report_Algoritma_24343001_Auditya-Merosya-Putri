#include <stdio.h>

int main(){
    int i, j;

    //loop untuk baris
    for (int i = 1; i <= 5; i++){
        //loop untuk kolom
        for (int j = 1; j <= i; j++){
            printf(" %d", i * j);
        }
        printf("\n");
    }
}
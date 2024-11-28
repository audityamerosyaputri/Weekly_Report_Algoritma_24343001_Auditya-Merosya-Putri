#include <stdio.h>
#include <string.h>

int main(){
    char kalimat[50];
    int counter;

    //Inputkan kalimat
    printf("Kalimat masukan: ");
    fgets(kalimat, sizeof(kalimat), stdin);
    kalimat[strcspn(kalimat, "\n")] = 0;

    counter = strlen(kalimat);

    printf("Kebalikannya: ");
    for(counter - 1; counter >= 0; counter--){
        putchar(kalimat[counter]);
    }
    printf("\n");
    return 0;
}
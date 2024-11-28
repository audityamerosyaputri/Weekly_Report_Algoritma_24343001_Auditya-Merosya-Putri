#include <stdio.h>
#include <string.h>

int main(){
    char nama[] = "BORLAND";
    
    //Pointer untuk menunjukan karakter dengan indeks dari akhir 
    char *ptr = nama;

    //Loop untuk menampilkan secara bertahap 
    for (int i = 1; i <= strlen(nama); i++){
        printf("%.*s\n", i, ptr);
    }

    return 0;
}
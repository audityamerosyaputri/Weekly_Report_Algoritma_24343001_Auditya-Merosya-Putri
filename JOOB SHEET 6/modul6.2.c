
#include <stdio.h>

int main() {
    int n = 6; // Jumlah baris
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++){
          printf("*");  
        }
        printf("\n");        
    }
}

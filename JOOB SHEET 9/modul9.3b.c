#include <stdio.h>

int main() {
    // Mendefinisikan nilai Lesley
    int Lesley = 57082;

    // Menghitung nilai Layla
    int *Layla = &Lesley;

    // Menghitung nilai Balmond
    int Balmond = *Layla + 1;

    // Menampilkan hasil
    printf("Nilai dari Lesley: %d\n", *Layla);
    printf("Nilai Balmond: %d\n", Balmond);

    return 0;
}
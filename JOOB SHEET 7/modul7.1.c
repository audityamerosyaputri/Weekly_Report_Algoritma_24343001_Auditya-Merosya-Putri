#include <stdio.h>

int main() {
    float nilai[20], total_nilai = 0, rata_rata;

    // Looping untuk input nilai mahasiswa
    printf("Masukkan nilai untuk 20 mahasiswa!\n");
    for (int i = 0; i < 20; i++) {
        printf("Masukkan nilai mahasiswa ke-%d: ", i + 1);
        scanf("%f", &nilai[i]);  
        total_nilai += nilai[i];  //Menambahkan nilai ke total
    }

    printf("Total nilai = %.2f\n", total_nilai);

    rata_rata = (float)total_nilai / 20;
    printf("Rata-rata = %.2f\n", rata_rata);

    return 0;
}

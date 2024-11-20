#include <stdio.h>

int main()
{
    char nama[100], NIM[50], prodi[100], fakultas[100];
    float nilai_presensi = 85;
    float nilai_praktek = 65;
    float nilai_UTS = 80;
    float nilai_UAS = 75;
    float nilai_akhir;

    // input untuk nama
    printf("masukan nama: ");
    scanf("%s", nama);

    // input untuk NIM
    printf("masukan NIM: ");
    scanf("%s", NIM);

    // input untuk prodi
    printf("masukan prodi: ");
    scanf("%s", prodi);

    // input untuk fakultas
    printf("masukan fakultas: ");
    scanf("%s", fakultas);

    // menghitung nilai akhir dengan bobot
    nilai_akhir = (0.10 * nilai_presensi) + (0.20 * nilai_praktek) + (0.30 * nilai_UTS) + (0.40 * nilai_UAS);

    // menampilkan data yang dimasukan
    printf("\n=== data yang dimasukkan ===\n");
    printf("masukan nama: %s\n", nama);
    printf("masukan NIM: %s\n", NIM);
    printf("masukan prodi: %s\n", prodi);
    printf("masukan fakultas: %s\n", fakultas);
    printf("nilai akhir: %.2f\n", nilai_akhir);
}
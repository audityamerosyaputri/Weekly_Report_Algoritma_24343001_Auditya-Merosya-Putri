#include <stdio.h>

int main()
{
    int durasi = 3;
    int durasi_jam;
    float tarif_satu_jam_pertama = 15000;
    float tarif_jam_berikutnya = tarif_satu_jam_pertama * 0.5;
    float total_biaya;

    total_biaya = tarif_satu_jam_pertama + (durasi - 1) * tarif_jam_berikutnya;

    // menampilkan data yang dimasukan
    printf("masukan total biaya untuk menonton 3 jam: Rp %.2f\n", total_biaya);

    return 0;
}
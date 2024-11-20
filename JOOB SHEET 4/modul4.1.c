#include <stdio.h>

int main()
{
    int detik, menit, jam;

    // masukan input
    printf("masukan jumlah detik: ");
    scanf("%i", &detik);

    // konversi detik ke jam, menit, dan sisa waktu
    jam = detik / 3600;
    menit = (detik / 60) % 60;
    detik = detik % 60;

    // output yang dihasilkan
    printf("%i jam, %imenit, %idetik\n", jam, menit, detik);

    return 0;
}
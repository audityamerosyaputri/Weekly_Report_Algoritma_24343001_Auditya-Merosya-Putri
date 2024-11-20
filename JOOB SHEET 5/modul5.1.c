#include <stdio.h>

int main()
{
    int pilihan;
    float angka_1, angka_2, hasil;

    // Menu utama
    printf("=== Kalkulator Sederhana ===\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Hasil Bagi (Pembagian Bulat)\n");
    printf("Pilih operasi (1-5): ");
    scanf("%d", &pilihan);

    // Meminta input angka
    printf("Masukkan angka pertama: ");
    scanf("%f", &angka_1);
    printf("Masukkan angka kedua: ");
    scanf("%f", &angka_2);

    switch (pilihan)
    {
    case 1: // Penjumlahan
        hasil = angka_1 + angka_2;
        printf("Hasil Penjumlahan: %.2f\n", hasil);
        break;
    case 2: // Pengurangan
        hasil = angka_1 - angka_2;
        printf("Hasil Pengurangan: %.2f\n", hasil);
        break;
    case 3: // Perkalian
        hasil = angka_1 * angka_2;
        printf("Hasil Perkalian: %.2f\n", hasil);
        break;
    case 4: // Pembagian
        if (angka_2 != 0)
        {
            hasil = angka_1 / angka_2;
            printf("Hasil Pembagian: %.2f\n", hasil);
        }
        else
        {
            printf("Error: Pembagian dengan nol!\n");
        }
        break;
    case 5: // Hasil Bagi (Pembagian Bulat)
        if (angka_2 != 0)
        {
            int hasil_bagi = (int)angka_1 / (int)angka_2; // Pembagian bulat
            printf("Hasil Bagi: %d\n", hasil_bagi);
        }
        else
        {
            printf("Error: Pembagian dengan nol!\n");
        }
        break;
    default:
        printf("Pilihan tidak valid!\n");
        break;
    }

    return 0;
}
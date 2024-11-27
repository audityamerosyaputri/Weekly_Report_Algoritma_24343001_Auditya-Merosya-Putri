#include <stdio.h>
#include <math.h>

// Fungsi untuk penjumlahan
float penjumlahan(int a, int b)
{
    return a + b;
}

// Fungsi untum pengurangan
float pengurangan(int a, int b)
{
    return a - b;
}

// Fungsi untuk perkalian
float kali(int a, int b)
{
    return a * b;
}

// Fungsi untuk pembagian
float bagi(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Pembagian dengan nol!\n");
    }
    else
    {
        float hasil = (float)a / (float)b;
        return hasil;
    }
}

void main()
{
    float num1, num2;
    int pilihan;

    // Input angka pertama dan kedua
    printf("Masukkan angka pertama: ");
    scanf("%f", &num1);
    printf("Masukkan angka kedua: ");
    scanf("%f", &num2);

    // Menu operasi aritmatika
    printf("\nPilih operasi aritmatika yang ingin dilakukan:\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("Masukkan pilihan (1/2/3/4): ");
    scanf("%d", &pilihan);

    // Proses berdasarkan pilihan operasi
    float hasil;
    switch (pilihan)
    {
    case 1:
        hasil = penjumlahan(num1, num2);
        printf("Hasil penjumlahan: %.2f\n", hasil);
        break;
    case 2:
        hasil = pengurangan(num1, num2);
        printf("Hasil pengurangan: %.2f\n", hasil);
        break;
    case 3:
        hasil = kali(num1, num2);
        printf("Hasil perkalian: %.2f\n", hasil);
        break;
    case 4:
        if (num2 != 0)
        {
            hasil = bagi(num1, num2);
            printf("Hasil pembagian: %.2f\n", hasil);
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
}

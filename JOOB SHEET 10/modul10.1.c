#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void permainan()
{
    int angkaTebakan, Tebakan, upaya;
    char bermainLagi;

    srand(time(NULL));

    // Rentang nomor 1 sampai 20
    angkaTebakan = (rand() % 20) + 1;
    upaya = 0;
    printf("Saya sudah memilih nomor antara 1 sampai 20, Silahkan tebak!\n");

    // Loop untuk menebak angka
    do
    {
        printf("Masukan angka tebakan: ");
        scanf("%d", &Tebakan);
        upaya++;

        if (Tebakan < angkaTebakan)
        {
            printf("Nomor saya lebih besar!");
        }
        else if (Tebakan > angkaTebakan)
        {
            printf("Nomor saya lebih kecil!");
        }
        else
        {
            printf("Selamat, Anda benar! Nomor saya adalah %d\n", angkaTebakan);
            printf("Anda membutuhkan %d percobaan untuk menebaknya\n", upaya);
            break;
        }
    } while (1);

    // Opsi untuk bermain lagi
    printf("Apakah Anda ingin bermain lagi? (y/n): ");
    scanf(" %c", &bermainLagi);

    if (bermainLagi == 'y' || bermainLagi == 'Y')
    {
        permainan();
    }
    else
    {
        printf("Terimakasih telah bermain!\n");
    }
}

int main()
{
    printf("Selamat Datang dipermainan tebak angka sederhana!\n");
    permainan();
    return 0;
}

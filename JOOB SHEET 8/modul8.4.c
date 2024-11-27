#include <stdio.h>

//Fungsi menghitung diskon
float potongan(float total_belanja)
{
    if (total_belanja < 1000000)
    {
        return 0;
    }
    else if (total_belanja >= 1000000 && total_belanja < 3000000)
    {
        return total_belanja * 0.20;
    }
    else if (total_belanja > 3000000)
    {
        return total_belanja * 0.35;
    }
}

//Fungsi untuk menghitung uang yang harus dibayarkan
    float yang_dibayar(float total_belanja, float diskon)
    {
        return total_belanja - diskon;
    }


int main()
{
    float total_belanja, diskon, harus_dibayar;

    // Input pengguna
    printf("\nSelamat Datang\n");
    printf("Masukan total belanja:Rp. ");
    scanf("%f", &total_belanja);

    // Menghitung diskon yang didapatkan
    diskon = potongan(total_belanja);

    //Menghitung uang yang harus dibayarkan
    harus_dibayar = yang_dibayar(total_belanja, diskon);

    //Output ditampilkan
    printf("Total pembelian:Rp.  %.2f\n", total_belanja);
    printf("Besar diskon: %.2f\n", diskon);
    printf("Besar yang harus dibayarkan: %.2f\n", harus_dibayar);

    return 0;
}
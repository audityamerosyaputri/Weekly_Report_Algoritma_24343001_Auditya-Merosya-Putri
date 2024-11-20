#include <stdio.h>

int main()
{
    int saldo_ATM = 175000;
    int minimal_saldo = 50000;
    int pilihan, jumlah;
    char nama_akun[] = "hatori";
    char no_rek[] = "0123";

    // tampilkan data
    printf("\nSelamat datang di ATM\n");
    printf("No Rekening : %s\n", no_rek);
    printf("Nama akun : %s\n", nama_akun);

    do
    {
        printf("Menu pilihan\n");
        printf("1.Cek saldo\n");
        printf("2.Setoran\n");
        printf("3.Penarikan tunai\n");
        printf("4.Exit\n");
        printf("Masukan pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
        case 1:
            printf("\nSaldo anda saat ini: %d\n", saldo_ATM);
            break;
        case 2:
            printf("Masukan jumlah setoran :Rp. ");
            scanf("%d", &jumlah);
            if (jumlah <= 0)
            {
                printf("Jumlah setoran tidak valid!\n");
            }
            else
            {
                saldo_ATM += jumlah;
                printf("Setoran berhasil, saldo anda saat ini: Rp. %d\n", saldo_ATM);
            }
            break;
        case 3:
            printf("Masukan jumlah penarikan : Rp. %d\n", saldo_ATM);
            if (jumlah <= 0)
            {
                printf("Jumlah penarikan tidak valid!\n");
            }
            else if (saldo_ATM - jumlah < minimal_saldo)
            {
                printf("Penarikan saldo gagal minimal Rp. %d\n", minimal_saldo);
            }
            else
            {
                saldo_ATM -= jumlah;
                printf("Penaraikan anda berhasil, saldo anda saat ini : Rp. %d\n", saldo_ATM);
            }
            break;

        case 4:
            printf("Terima kasih telah melalukan layanan ATM\n");
            break;

        default:
            printf("\nPiihan tidak valid, silahkan pilih menu yang tersedia\n");
            break;
        }
    } while (pilihan != 4);

    return 0;
}
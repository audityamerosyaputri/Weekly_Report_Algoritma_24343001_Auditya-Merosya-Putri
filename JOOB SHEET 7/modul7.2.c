#include <stdio.h>
#include <string.h>

int main()
{
    int banyak_mahasiswa;
    char nama_mahasiswa[50];

    // Inputkan banyak mahasiswa
    printf("Masukan banyak mahasiswa: ");
    scanf("%d", &banyak_mahasiswa);
    getchar();

    // Loop untuk menampilkan nama mahasiswa
    for (int i = 0; i < banyak_mahasiswa; i++)
    {
        printf("Nama mahasiswa ke-%d: ", i + 1);
        fgets(nama_mahasiswa, sizeof(nama_mahasiswa), stdin);
        nama_mahasiswa[strcspn(nama_mahasiswa, "\n")] = 0; // Menghapus newline

        printf("\n"); // Menambahkan baris kosong setelah setiap input
    }

    // Output semua nama mahasiswa
    printf("\nDaftar Nama Mahasiswa: \n");
    for (int i = 0; i < banyak_mahasiswa; i++)
    {
        printf("Mahasiswa ke-%d: \n", i + 1);
        printf("Nama Mahasiswa: %s\n", nama_mahasiswa);
    }

    return 0;
}
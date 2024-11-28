#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MAHASISWA 100 // Maksimum jumlah mahasiswa yang bisa diinputkan

struct Mahasiswa {
    char nama[50];
    char nim[20];
    char jurusan[50];
    char program_studi[50];
};

int main() {
    struct Mahasiswa mahasiswa[MAX_MAHASISWA];
    int jumlah_mahasiswa, i;
    FILE *file;

    // Membuka file untuk menulis
    file = fopen("datamahasiswa.txt", "w");
    if (file == NULL) {
        printf("Kamu gagal membuka file!\n");
        return 1;
    }

    // Input jumlah mahasiswa
    printf("Masukkan jumlah mahasiswa yang ingin diinput: ");
    scanf("%d", &jumlah_mahasiswa);
    getchar();  

    // Loop untuk input biodata mahasiswa
    for (i = 0; i < jumlah_mahasiswa; i++) {
        printf("\nMasukkan data mahasiswa ke-%d\n", i + 1);

        printf("Nama    : ");
        fgets(mahasiswa[i].nama, sizeof(mahasiswa[i].nama), stdin);
        mahasiswa[i].nama[strcspn(mahasiswa[i].nama, "\n")] = 0;  

        printf("NIM     : ");
        fgets(mahasiswa[i].nim, sizeof(mahasiswa[i].nim), stdin);
        mahasiswa[i].nim[strcspn(mahasiswa[i].nim, "\n")] = 0;

        printf("Jurusan : ");
        fgets(mahasiswa[i].jurusan, sizeof(mahasiswa[i].jurusan), stdin);
        mahasiswa[i].jurusan[strcspn(mahasiswa[i].jurusan, "\n")] = 0;

        printf("Program Studi : ");
        fgets(mahasiswa[i].program_studi, sizeof(mahasiswa[i].program_studi), stdin);
        mahasiswa[i].program_studi[strcspn(mahasiswa[i].program_studi, "\n")] = 0;

        // Menyimpan data mahasiswa ke dalam file
        fprintf(file, "Mahasiswa ke-%d\n", i + 1);
        fprintf(file, "Nama           : %s\n", mahasiswa[i].nama);
        fprintf(file, "NIM            : %s\n", mahasiswa[i].nim);
        fprintf(file, "Jurusan        : %s\n", mahasiswa[i].jurusan);
        fprintf(file, "Program Studi  : %s\n", mahasiswa[i].program_studi);
        fprintf(file, "-----------------------------\n");
    }

    // Menutup file setelah selesai menulis
    fclose(file);

    // Membuka dan menampilkan data dari file
    file = fopen("datamahasiswa.txt", "r");
    if (file == NULL) {
        printf("Tidak bisa membuka file untuk membaca!\n");
        return 1;
    }
    fclose(file);

    printf("\nIsi data mahasiswa berhasil disimpan ke dalam file 'datamahasiswa.txt'.\n");
    return 0;
}
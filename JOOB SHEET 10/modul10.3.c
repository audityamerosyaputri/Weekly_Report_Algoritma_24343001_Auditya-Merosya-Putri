#include <stdio.h>
#include <string.h>

#define MAX_MAHASISWA 100 // Maksimal jumlah mahasiswa yang bisa dimasukkan

// Struktur untuk menyimpan data mahasiswa
struct Mahasiswa {
    char npm[15];
    char nama[50];
    char tgl_lahir[15];
    char alamat[100];
    char hp[20];
};

int main() {
    struct Mahasiswa mahasiswa[MAX_MAHASISWA];
    int jumlah = 0; 
    char pilihan; 

    do {
        // Input data mahasiswa
        printf("Masukan data mahasiswa ke-%d: \n", jumlah + 1);
        printf("Masukkan NPM: ");
        scanf(" %s", mahasiswa[jumlah].npm);
        getchar();
        printf("Masukkan NAMA: ");
        fgets(mahasiswa[jumlah].nama, sizeof(mahasiswa[jumlah].nama), stdin);
        mahasiswa[jumlah].nama[strcspn(mahasiswa[jumlah].nama, "\n")] = '\0'; // Menghapus newline 
        printf("Masukkan TGL LAHIR (dd-mm-yyyy): ");
        scanf("%s", mahasiswa[jumlah].tgl_lahir);
        getchar();
        printf("Masukkan ALAMAT: ");
        fgets(mahasiswa[jumlah].alamat, sizeof(mahasiswa[jumlah].alamat), stdin);
        mahasiswa[jumlah].alamat[strcspn(mahasiswa[jumlah].alamat, "\n")] = '\0'; // Menghapus newline
        printf("Masukkan HP: ");
        scanf("%s", mahasiswa[jumlah].hp);

        // Menanyakan apakah ingin memasukkan data lagi
        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &pilihan); 
        getchar();

        jumlah++; 

        // Validasi jumlah mahasiswa tidak melebihi batas MAX_MAHASISWA
        if (jumlah >= MAX_MAHASISWA) {
            printf("Maksimum jumlah mahasiswa telah tercapai!\n");
            break;
        }
    } while (pilihan == 'y' || pilihan == 'Y');

    // Output data mahasiswa 
    printf("\nDaftar Mahasiswa:\n");
    for (int i = 0; i < jumlah; i++) {
        printf("%s %s %s %s %s\n", mahasiswa[i].npm, mahasiswa[i].nama, mahasiswa[i].tgl_lahir, mahasiswa[i].alamat, mahasiswa[i].hp);
    }

    return 0;
}

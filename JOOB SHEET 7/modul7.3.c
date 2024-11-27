#include <stdio.h>
#include <string.h>

int main()
{
    char username[100];
    char password[50];

    // Inputkan data
    printf("\nSelamat Datang di Halaman Login!\n");
    printf("Masukan username: ");
    fgets(username, sizeof(username), stdin);

    printf("Masukan password: ");
    scanf("%s", &password);

    if (strcmp(password, "cantiknyaOy") == 0)
    {
        printf("Selamat Anda berhasil login!\n");
    }
    else
    {
        printf("Password salah, coba lagi!\n");
    }

    printf("Terimakasih sudah login!\n");

    return 0;
}
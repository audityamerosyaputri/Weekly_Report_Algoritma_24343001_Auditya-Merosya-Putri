/* Membuat input nama */
#include <stdio.h>
#include <string.h>
int main()
{
    char auditya_merosya_putri[31];
    printf("Hello, siapa nama lengkap kamu? \n");
    scanf("%30[^\n]s", auditya_merosya_putri);
    printf("Selamat datang %s dalam pemograman c!\0", auditya_merosya_putri);
    return 0;
}
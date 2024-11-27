#include <stdio.h>

// Fungsi rekursif untuk menghitung perkalian
int perkalian(int a, int b) {
    // Kasus dasar: jika b = 1, hasil perkalian adalah a
    if (b == 1) {
        return a;
    }
    // Kasus rekursif: tambahkan a sebanyak b-1 kali
    else {
        return a + perkalian(a, b - 1);
    }
}

int main() {
    int a, b;

    // Input dari pengguna
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &b);

    // Menghitung hasil perkalian menggunakan fungsi rekursif
    int hasil = perkalian(a, b);

    // Menampilkan hasil
    printf("Hasil perkalian %d x %d = %d\n", a, b, hasil);
    
    return 0;
}
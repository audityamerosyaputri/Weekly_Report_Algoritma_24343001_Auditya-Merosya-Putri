#include <stdio.h>
#include <math.h>

#define PHI 3.14159

//Fungsi untuk menghitung luas lingkaran
float luas(float r){
    return PHI * r * r;
}

//Fungsi untuk menghitung keliling lingkaran
float keliling(float r){
    return 2 * PHI * r;
}

void main(){
    float radius;

    //Input oleh pengguna
    printf("Masukan jari-jari linngkaran: ");
    scanf("%f", &radius);

    //Menampilkan output
    printf("Luas lingkaran: %.2f\n", luas(radius));
    printf("Keliling lingkaran: %.2f\n", keliling(radius));
}
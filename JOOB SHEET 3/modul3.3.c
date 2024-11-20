#include <stdio.h>

int main()
{
    float d = 12;
    const float phi = 3.14;
    float r = d / 2;
    float volume = 4.0 / 3.0 * phi * r * r * r;
    float luas_permukaan_bola = 4 * phi * r * r;

    // menampilkan output
    printf("volume: %.2f\n", volume);
    printf("luas permukaan bola: %.2f\n", luas_permukaan_bola);

    return 0;
}
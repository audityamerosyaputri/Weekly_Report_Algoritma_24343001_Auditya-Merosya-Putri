#include <stdio.h>

int main()
{
    float c, k, f, r;

    // input dalam celcius
    printf("suhu dalam celcius: ");
    scanf("%f", &c);

    // konversi suhu ke kelvin, farehnheit, dan reamur
    k = c + 273.15;
    f = (c * 1.8) + 32;
    r = (c * 0.8);

    // output yang dihasilkan
    printf("suhu dalam kelvin: %.2f\n", k);
    printf("suhu  dalam farenheit: %.2f\n", f);
    printf("suhu dalam reamur: %.2f\n", r);

    return 0;
}
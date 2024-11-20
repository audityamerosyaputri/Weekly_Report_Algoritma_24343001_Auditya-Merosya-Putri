#include <stdio.h>

int main()
{
    int i;

    // deret bilangan genap dari 0 hingga 50
    printf("deret bilangan genap dari 0 hingga 50: \n");
    for (i = 0; i <= 50; i += 2)
    {
        printf("%d", i);
    }

    // jarak antar output
    printf("\n\n");

    // deret bilangan ganjil dari 0 hingga 50
    printf("deret bilangan ganjil dari 0 hingga 50: \n");
    for (i = 0; i <= 50; i += 2)
    {
        printf("%d", i);
    }

    return 0;
}
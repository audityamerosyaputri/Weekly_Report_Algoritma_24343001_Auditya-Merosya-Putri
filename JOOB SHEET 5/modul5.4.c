#include <stdio.h>

int main()
{
    float nilaiKehadiran, nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;
    char grade;

    printf("Masukkan nilai kehadiran (0-100): ");
    scanf("%f", &nilaiKehadiran);

    printf("Masukkan nilai tugas (0-100): ");
    scanf("%f", &nilaiTugas);

    printf("Masukkan nilai UTS (0-100): ");
    scanf("%f", &nilaiUTS);

    printf("Masukkan nilai UAS (0-100): ");
    scanf("%f", &nilaiUAS);

    nilaiAkhir = (nilaiKehadiran * 0.20) + (nilaiTugas * 0.20) + (nilaiUTS * 0.25) + (nilaiUAS * 0.35);

    if (nilaiAkhir >= 91)
    {
        grade = 'A';
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan\n");
    }
    else if (nilaiAkhir >= 86)
    {
        grade = 'A';
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan\n");
    }
    else if (nilaiAkhir >= 81)
    {
        grade = 'B';
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    }
    else if (nilaiAkhir >= 76)
    {
        grade = 'B';
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    }
    else if (nilaiAkhir >= 66)
    {
        grade = 'B';
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    }
    else if (nilaiAkhir >= 56)
    {
        grade = 'C';
        printf("Anda lulus, tingkatkan lagi untuk kedepannya!\n");
    }
    else if (nilaiAkhir >= 45)
    {
        grade = 'D';
        printf("Maaf, anda tidak lulus!\n");
    }
    else
    {
        grade = 'E';
        printf("Maaf, anda tidak lulus!\n");
    }

    printf("Nilai Akhir Anda: %.2f\n", nilaiAkhir);
    printf("Grade Anda: %c\n", grade);

    return 0;
}
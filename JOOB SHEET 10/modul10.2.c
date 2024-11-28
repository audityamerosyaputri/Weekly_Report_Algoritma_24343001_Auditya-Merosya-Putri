#include <stdio.h>
#include <string.h>

typedef struct {
    char name[12];
    int startDay;
    int startMonth;
    int endDay;
    int endMonth;
} Zodiac;

void findZodiac(int day, int month) {
    Zodiac zodiacs[] = {
        {"CAPRICORN", 22, 12, 19, 1},
        {"AQUARIUS", 20, 1, 18, 2},
        {"PISCES", 19, 2, 20, 3},
        {"ARIES", 21, 3, 19, 4},
        {"TAURUS", 20, 4, 20, 5},
        {"GEMINI", 21, 5, 20, 6},
        {"CANCER", 21, 6, 22, 7},
        {"LEO", 23, 7, 22, 8},
        {"VIRGO", 23, 8, 22, 9},
        {"LIBRA", 23, 9, 22, 10},
        {"SCORPIO", 23, 10, 21, 11},
        {"SAGITTARIUS", 22, 11, 21, 12}
    };

    int totalZodiacs = sizeof(zodiacs) / sizeof(Zodiac);
    for (int i = 0; i < totalZodiacs; i++) {
        if ((month == zodiacs[i].startMonth && day >= zodiacs[i].startDay) ||
        (month == zodiacs[i].endMonth && day <= zodiacs[i].endDay)) {
            printf("Zodiak Kamu adalah : %s\n", zodiacs[i].name);
            return;
        }
    }
    printf("Tanggal yang kamu input tidak valid untuk zodiak\n");
}

int main() {
    int day, month, year;

    printf("Masukkan tanggal lahir Kamu yaa [dd-mm-yyyy]: ");
    scanf("%d-%d-%d", &day, &month, &year);

    if (month < 1 || month > 12 || day < 1 || day > 31) {
        printf("Maaf tanggal yang kamu input tidak valid, coba lagi yaa\n");
        return 1;
    }
    printf("Tanggal Lahir Kamu [tgl-bln-tahun] : %02d-%02d-%02d\n", day, month, year);
    findZodiac(day, month);

    return 0;
}
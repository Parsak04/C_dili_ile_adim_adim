#include <stdio.h>   
#include <time.h>    

int main() {
    time_t t;              // Zamanı saniye cinsinden tutar
    struct tm *zamanBilgi; // Zamanı gün, ay, yıl, saat gibi parçalara böler

    time(&t);                   // Şu anki zamanı al
    zamanBilgi = localtime(&t); // Yerel saat formatına çevir

    // Tarih yazdırma (%02d → Tek haneli sayılara başına 0 ekler)
    printf("Tarih: %02d-%02d-%d\n", 
           zamanBilgi->tm_mday,       // Gün
           zamanBilgi->tm_mon + 1,    // Ay (+1 çünkü aylar 0'dan başlar)
           zamanBilgi->tm_year + 1900 // Yıl (+1900 eklenir)
    );

    // Saat yazdırma
    printf("Saat: %02d:%02d:%02d\n", 
           zamanBilgi->tm_hour, //Saat
           zamanBilgi->tm_min,  //Dakika
           zamanBilgi->tm_sec   //Saniye
    );

    return 0;
}


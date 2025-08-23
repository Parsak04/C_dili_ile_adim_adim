#include <stdio.h>
#include <string.h>

int main() {
    char notum[200]; // Notu saklamak için karakter dizisi.

    printf("Notunuzu girin: ");
    fgets(notum, sizeof(notum), stdin); // Kullanıcıdan not alır.

    FILE *dosya = fopen("notlar.txt", "a"); // Dosyayı ekleme modunda açar.
    if (dosya == NULL) {
        printf("Dosya acilamadi!\n");
        return 1; // Hata varsa programı bitirir.
    }

    notum[strcspn(notum, "\n")] = '\0'; //Tekrar metin girdiğimizde fazladan saatır atlıyorsa o satırı silmek için.
    fprintf(dosya, "%s\n", notum); // Notu dosyaya yazar.
    fclose(dosya); // Dosyayı kapatır.

    printf("Not kaydedildi!\n");
    return 0;   //Programı başarıyla kapatır.
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {    //Program başladığında çılışacak ilk fonksiyon.
    int rastgeleSayi, tahmin, denemeSayisi = 0; // rastgeleSayi: bilgisayarın tuttuğu sayı, tahmin: kullanıcı tahmini, denemeSayisi: kaç deneme yapıldı

    srand(time(NULL));  //Rastgele sayı üreticisini başlatır.
    rastgeleSayi = rand() % 100 + 1;    /*Rand sayesinde rastgele sayı üretiyoruz +1 eklememizin sebebi ise 
                                        %100 0-99 arasında sayı üretmesini sağlar +1 ile bunu 0-100 yapıyoruz.*/
                                        
    printf("Sayi Tahmin Oyununa Hosgeldiniz!\n");   //Kullanıcıyı selamlar.
    printf("1 ile 100 arasinda bir sayi tuttum, bakalim bulabilecek misin?\n"); //Oyunun kuralını açıklar ve meydan okur.

    while (1) {     //Sürekli çalışacak bir döngü oluşturur.
        printf("Tahmininiz: ");     //Kullanıcıdan tahminde bulunmasını ister.
        if (scanf("%d", &tahmin) != 1) {    /*Kullanıcıdan değer almamızı sağlar ve bunu tahmin değişkenine kaydeder.
                                            %d sayesinde sadece tam sayı girmesini sağlarız*/
            printf("Lutfen sadece sayi giriniz!\n");    //Tam sayı değeri yerine başka bir şey girerse uyarır.
            return 1;   //Sayı yerine harf girilirse programı hemen kapatır ve çökmesini önler.
        }

        denemeSayisi++;     //Her tahminden sonra denemeSayisini bir arttırır.

        if (tahmin > rastgeleSayi) {    //Kullanıcının girdiği sayıyının bilgisayarın tutuğu sayıdan büyük olup olmadığını kontrol eder.
            printf("Daha kucuk bir sayi dene!\n");      //Sayı büyükse küçük sayı girmesini söyler.
        } else if (tahmin < rastgeleSayi) {     //Kullanıcının girdiği sayıyının bilgisayarın tutuğu sayıdan küçük olup olmadığını kontrol eder.
            printf("Daha buyuk bir sayi dene!\n");      //Sayı küçükse büyük sayı girmesini söyler.
        } else {    //Tahmin ne büyük ne de küçükse doğru tahmin yapmış demektir.
            printf("Tebrikler! %d sayisini %d denemede buldunuz.\n", rastgeleSayi, denemeSayisi);   //Ardından ilk %d sayesinde rastgeleSayi yı ikinci %d sayesinde de denemeSayisi nı yazar. 
            
            printf("Programi kapatmak icin Enter'a basin...");      //Programı kapatmak isteyip istemediğini sorar.
            getchar();      //scanef() fonksiyonunda basılan ilk enter tuşunu tamponda bırakır.
            getchar();      //Gerçekten kullanıcı enter'a basana kadar bekler
            
            break;  //Döngüyü sonlandırır.
        }
    }

    return 0;   //Programı sonlandırır.

}



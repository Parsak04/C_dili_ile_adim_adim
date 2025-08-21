#include <stdio.h>

int main() {
    char işlem;     //Kullanıcıdan işlem isteyeceğiz ve seçilen işlem burada saklanacak. Örn(+ - * /)
    double sayi1;   //İlk sayı (double kullandığımız için ondalık da olabilir.)        
    double sayi2;   //İkinci sayı (double kullandığımız için ondalık da olabilir.)
    double sonuç;   //İşlemin sonucu saklanacak.

    printf("\n 1. sayiyi giriniz: ");   //Kullanıcıdan ilk sayıyı istiyeceğiz.
    scanf("%lf", &sayi1);               //Kullanıcıdan aldığımız ilk sayıyı, sayi1 değişkenine atayacağız.
    printf("\n 2. sayiyi giriniz: ");   //Kullanıcıdan ikinci sayıyı istiyeceğiz.
    scanf("%lf", &sayi2);               //Kullanıcıdan aldığımız ikinci sayıyı, sayi2 değişkenine atayacağız.
    
    printf("\n Hangi islemi yapmak istersiniz? (+ - * /) "); //Kulanıcıya hangi işlemi yapmak istediğiniz soruyoruz.
    scanf(" %c", &işlem);                //%c ile kullanıcıdan (+ - * /) karakterlerinden birini alıcağız ve &işlem değişkenine yazacağız. 
                                         //%c kodunun başına boşluk koydukki 2. sayıyı gridikten sonra enter a basınca kodumuz kapanmasın.(Başındaki boşluğu silip deneye bilirsiniz.)

    switch (işlem)  //Kullanıcıdan alınan karaktere göre yapacağımız işlemi aşşağıda yazacağız.
    {
    case '+':                               //Alınan karakter "+" 
        sonuç = sayi1 + sayi2;              //Bu satırda sayı1 ve sayı2 toplanır, sonuç değişkenine atanır.
        printf("\n Sonuc = %.2lf", sonuç);  //Toplama işleminin sonucu ekrana yazılır.
                                            // %.2lf → başındaki .2 virgülden sonra gösterilecek basamak sayısını belirtir.
        break;                              //İşlemi bitirir.

    case '-':                               //Alınan karakter "-"
        sonuç = sayi1 - sayi2;              //Bu satırda sayı1 ve sayı2'nin farkları alınır ve sonuç değişkenine atanır.  
        printf("\n Sonuc = %.2lf", sonuç);  
        break;                              

    case '*':                               //Alınan karakter "*"
        sonuç = sayi1 * sayi2;              //Bu satırda sayı1 ve sayı2 çarpılır ve sonuç değişkenine atanır.
        printf("\n Sonuc = %.2lf", sonuç);  
        break;                             

    case '/':                               //Alınan karakter "/"
        sonuç = sayi1 / sayi2;              //Bu satırda sayı1 ve sayı2 bölünür ve sonuç değişkenine atanır.
        printf("\n Sonuc = %.2lf", sonuç); 
        break;                           
    
    default:
    printf("\n %c Kullanilabilir bir islem degil! ", işlem);    //(+ - * /) karakterleri dışında herhangi bir değer girilirse ekrana bu mesaj yazdırılır 
        return 0;                                               //Kodu tamamen kapatır.
    }



}   
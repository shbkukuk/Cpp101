// kosullar.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
void fonksiyon() {
    int sayi1, sayi2, sonuc;
    cout << "Birinci sayiyi giriniz: " << endl;
    cin >> sayi1;
    cout << "İkinci Sayiyiyi Giriniz" << endl;
    cin >> sayi2;
    if (sayi1 > sayi2) {
        cout << "İki sayida pozitif" << endl;
    }
    else {
        cout << "İki sayıda negatif" << endl;
    }
}
void notu() {
    int vize;
    int final;
    cout << "Vize notunu girinz:" << endl;
    cin >> vize;
    cout << "final notunu giriniz" << endl;
    cin >> final;
    double ortalama = (vize + final) / 2;
    if (ortalama > 90) { cout << "AA aldiniz" << endl; }
    else if (ortalama > 80) { cout << "BB aldiniz" << endl; }
    else if (ortalama > 70) { cout << "CC aldiniz " << endl; }
    else { cout << "FF kaldiniz" << endl; }
    cout << "kosullar bitti"   ;

}



int main()
{
    /*int sayi1, sayi2, sonuc;
    cout << "Birinci sayiyi giriniz: " << endl;
    cin >> sayi1;
    cout << "İkinci Sayiyiyi Giriniz" << endl;
    cin >> sayi2;

    sonuc = sayi1 > sayi2;
    if (sayi1 > sayi2)
        cout << "Birinci Sayi Daha Buyuk" << endl;*/

    int a = -5;
    cout<<(a > 0 ? "Pozitif" : "Negatif");

}





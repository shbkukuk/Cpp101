// diziler.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include<time.h>
#include <string>
using namespace std;
void karakter() {
    char yazi[] = "Merhabalar";
    cout << yazi << endl;
    char sayistr[20];
    int sayi = 123;
    int basamak = 0;
    int a = sayi;
    while (a != 0) {
        int kalan = a % 10;
        a = (a - kalan) / 10;
        basamak++;
    }
    sayistr[basamak] = '\0'; // '\0' bu karakter dizinin kapandığının anlamına geliyor. 
                            //Eğer bu olmaz ise program  çıldırır. bulana dek kapnmaz 
                            // 0 gördüğünde geri kalan eleman olsa dahi cout bunu anlamaz.
    a = sayi;
    cout << basamak << endl;
    while (a != 0) {
        int kalan = a % 10;
        a = (a - kalan) / 10;
        basamak--;
        sayistr[basamak] = 48 + kalan;
         
    }
    cout<< sayistr << endl;



}
void tek_cift() {
    int sayilar[10];
    srand(time(0));
    int tek_toplam = 0;
    int cift_toplam = 0;
    for (int i = 0; i < 10; i++) {
        sayilar[i] = rand()%100;


        for (int j = 0; j < 10; j++) {
            if (sayilar[j] % 2 != 0) {
                tek_toplam += sayilar[j];
            }
            else
            {
                cift_toplam += sayilar[j];
            }
        }
        
    }
    cout << "Tek toplam :" << tek_toplam << "\n" << "Cift Toplam " << cift_toplam << endl;
    cout << sayilar[10] << endl;
}

string sorting() {
    string a = "  ";
    int list[] = { 5, 8, 45, 78, 0, 9, 7, 4, 3, 4 };
    for (int j = 0; j < 10; j++) {
        for (int i = j; i < 10; i++) {
            if (list[j] > list[i]) {
                int smallest = list[i];
                list[i] = list[j];
                list[j] = smallest;

            }

        }
    }
    for (const int& n : list) {
        cout << n << "  ";
    }
    return  a;
}

int main()
{
    char strdeneme[] = "Merhabalar";
    cout << strdeneme << endl;

    strdeneme[3] = '\0';
    cout << strdeneme << endl;
    cout<< strlen(strdeneme);
    int ks = 0;
    while (strdeneme[ks] != '\0')
        ks++;
    cout << "srtdeneme uzunlugu: " << ks << endl;


}



// donguler.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
void tektoplam() {

    int toplam = 0;
    for (int i = 1; i < 100; i += 2)
        toplam += i;
    cout << "tek sayilarin toplami: " << toplam << endl;
}
void dongu() {
    int i = 0;
    while (true) {
        cout << i << endl;
        ++i;
        if (i == 5)
            break;

    }
        cout << i << endl;

}

int main()
{
    //for (int i = 0; i < 10; i++)
    //    cout << "Merhaba" << endl << i;
    //cout << "dongu bitti" << endl;
    dongu();
}



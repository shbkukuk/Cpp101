// Function.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

int factorial(int number) {
    if (number == 1)
        return 1;
    else
        return factorial(number - 1) * number;
}
int exponentiation(int number1, int number2) {
    int sonuc = 1;
    for (int i = 0; i < number2; i++) {
        sonuc *= number1;
    }
    return sonuc;
}

int main()
{
    int sayi, ust;
    cin >> sayi>>ust ;
    cout << exponentiation(sayi,ust) << endl;
}


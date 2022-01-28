// 101dersleri.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

namespace A {
    int x = 0;
}
namespace B {
    int x = 98;
}
int main()
{
    int a = 0;
    cout <<A::x << endl;
    cout << B::x << a << endl;
}

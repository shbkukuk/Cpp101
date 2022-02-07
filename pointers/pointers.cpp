// pointers.cpp
//

#include <iostream>
using namespace std;
void pluss(int* a) {
    (*a)++;
}
void swapvalue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
void swapadress(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    //read pointer and adress that keep in the memory
    int a = 12;
    int* p = &a;
   
    cout << "p..:" << p << endl;
    cout << "&a..:" << &a << endl;
    cout << "p..:" << *p << endl;
    cout << "a..:" << a << endl;


    //change value that keep in the memory adress
    p = 220;
    cout << "p..:" << p << endl;
    cout << "&a..:" << &a << endl;
    cout << "p..:" << *p << endl;
    cout << "a..:" << a << endl;
    //change value with function 
    int x = 10;
    cout << "X is value....." << x << endl;
    pluss(&x);
    cout << "X was increased value..." << x << endl;
    //SwapValue with adress
    int nb1 = 100;
    int nb2 = 80;
    swapvalue(nb1, nb2);
    printf("Swapvalue is called");
    cout << "nb1..." << nb1 << endl;
    cout << "nb2..." << nb2 << endl;
    swapadress(&nb1, &nb2);
    printf("Swapadress is called");
    cout << "nb1..." << nb1 << endl;
    cout << "nb2..." << nb2 << endl;

    //pointer aritmetichs 
    int m[] = { 1,2,3,4,5,6,7,8,9,10 };
    

}

 
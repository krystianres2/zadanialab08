
#include <iostream>
#include<time.h>
using namespace std;
int se(int* a, int* b) {
    return*a < *b ? *a : *b;
}
int se2(int* a, int* b) {
    return* a < *b ? a : b ;
}
int main()

{
   /* int a, b, c, * ptr, * ptr1, * ptr2;
    ptr = &a;
    ptr1 = &b;
    ptr2 = &c;
    cout << "podaj a: ", cin >> a;
    cout << "podaj b: ", cin >> b;
    cout << "podaj c: ", cin >> c;

   // (double)a;

    cout << "adres zmiennej a: " << ptr << endl;
    cout << "wartosc zmiennej a: " << *ptr << endl;
    cout << "adres zmiennej b: " << ptr1 << endl;
    cout << "wartosc zmiennej b: " << *ptr1 << endl;
    cout << "adres zmiennej c: " << ptr2 << endl;
    cout << "wartosc zmiennej c: " << *ptr2 << endl;

    cout << "roznica a - b: " << (*ptr) - (*ptr1) << endl;
    cout << "srednia z podanych liczb: " <<(double) (((*ptr) + (*ptr1) + (*ptr2))) / 3 << endl;*/

    //int tab[10],i,*ptr2;

    
   /* ptr2 = &tab[0]; cout << "Pierwszy element: " << ptr2 << endl;
    ptr2 = &tab[3]; cout << "Czwarty element: " << ptr2 << endl;
    ptr2 = &tab[0];
    for (int i = 0; i < 10; i++) {
        tab[i] = rand() % 99 + 1;
        ptr2 = &tab[i];
        cout << i << " element: " << tab[i] << " " << ptr2 << endl;
    }*/
   /* int z2[10], i, * wsk2;
    double suma = 0, srednia;
    for (int* wsk3 = &z2[0]; wsk3 <= &z2[9]; wsk3++) {

        suma += (*wsk3);
    }
    srednia = suma / 10;
    cout << "suma= " << suma << "\tsrednia= " << srednia << endl;
    for (int* wsk3 = &z2[0]; wsk3 <= &z2[9]; wsk3++) {
        if (*wsk3 > srednia) cout << *wsk3 << ",";
    }*/
    int a = 1;
    int b = 2;
    cout << se(&a, &b) << endl;


}




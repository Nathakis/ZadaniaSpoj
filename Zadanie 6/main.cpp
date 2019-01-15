/*
PTEST - Zadanie próbne
Napisaæ program do dodawania dwóch liczb ca³kowitych.
Na wejœciu podane s¹ w oddzielnych liniach dwie liczby naturalne A oraz B mniejsze od 200.
Na wyjœciu nale¿y wypisaæ wartoœæ ich sumy, A + B.

Przyk³ad


Wejœcie
2
3

Wyjœcie
5
*/
#include <iostream>

using namespace std;
int a,b;
int main()
{
    cin>>a>>b;
    if(a>200||b>200)return 0;
    cout<<a+b;
    return 0;
}

/*
PTEST - Zadanie pr�bne
Napisa� program do dodawania dw�ch liczb ca�kowitych.
Na wej�ciu podane s� w oddzielnych liniach dwie liczby naturalne A oraz B mniejsze od 200.
Na wyj�ciu nale�y wypisa� warto�� ich sumy, A + B.

Przyk�ad


Wej�cie
2
3

Wyj�cie
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

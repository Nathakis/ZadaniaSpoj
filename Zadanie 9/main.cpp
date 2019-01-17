/*
POL - Po³owa
Dla podanego ci¹gu d³ugoœci 2*k, wypisz na standardowe wyjœcie dok³adnie pierwsz¹ po³owê ci¹gu.

Wejœcie
W pierwszej linijce wejœcia znajduje siê jedna liczba ca³kowita t (1<=t<=100).
Ka¿dy wiersz o numerze od 2 do t+1, zawiera ci¹g d³ugoœci 2*k (1<=k<=1000).

Wyjœcie
Dla ka¿dego przypadku testowego na wyjœciu powinien pojawiæ siê ci¹g bêd¹cy pierwsz¹ po³ow¹ wczytanego ci¹gu.

Example
Wejœcie:
3
pierwszy
lubiec
ktotozrobi

Output:
pier
lub
ktoto
*/

#include <iostream>
#include <string>

using namespace std;

int liczba_linijek;
string slowo;
int liczba_liter;
int main()
{
    cin>>liczba_linijek;
    if(liczba_linijek<1||liczba_linijek>100)return 0;
    for(int i=0;i<liczba_linijek;i++)
    {
        cin>>slowo;
        liczba_liter=slowo.length();
            if(liczba_liter<1||liczba_liter>1000)return 0;
        liczba_liter/=2;
        for(int j=0;j<liczba_liter;j++)
        {
            cout<<slowo[j];
        }
        cout<<endl;
    }


    return 0;
}

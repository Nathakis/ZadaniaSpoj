/*
POL - Po�owa
Dla podanego ci�gu d�ugo�ci 2*k, wypisz na standardowe wyj�cie dok�adnie pierwsz� po�ow� ci�gu.

Wej�cie
W pierwszej linijce wej�cia znajduje si� jedna liczba ca�kowita t (1<=t<=100).
Ka�dy wiersz o numerze od 2 do t+1, zawiera ci�g d�ugo�ci 2*k (1<=k<=1000).

Wyj�cie
Dla ka�dego przypadku testowego na wyj�ciu powinien pojawi� si� ci�g b�d�cy pierwsz� po�ow� wczytanego ci�gu.

Example
Wej�cie:
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

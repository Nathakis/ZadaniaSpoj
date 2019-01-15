/*
FCTRL3 - Dwie cyfry silni
Zadanie: Silnia
Niech n będzie nieujemną liczbą całkowitą. Liczbę n! (czytaj n-silnia) definiuje się następująco.
Jeśli n ≤ 1, to n! = 1. Dla n > 1, n! jest równe iloczynowi wszystkich liczb od 1 do n, czyli n! = 1 * 2 * ... * n. Na przykład 4! = 1*2*3*4 = 24.

Zadanie
Napisz program, który:
wczyta ze standardowego wejścia nieujemną liczbę całkowitą n,
policzy cyfrę dziesiatek oraz cyfrę jedności w zapisie dziesiętnym liczby n!,
wypisze wynik na standardowe wyjście.
Wejście
W pierwszej linii wejścia znajduje się jedna liczba całkowia D (1≤D≤30), oznaczjąca liczbę przypadków do rozważenia.
Opis każdego przypadku składa się z jednej linii, w której znajduje się jedna nieujemna liczba całkowita n (0 ≤ n ≤ 1 000 000 000).

Wyjście
Dla każdego przypadku z wejścia.
Twój program powinien wypisać w osobnej linii dokładnie dwie cyfry (oddzielone pojedynczą spacją):
cyfrę dziesiątek i cyfrę jedności liczby n! zapisanej w systemie dziesiętnym.

Przykład
Dla danych wejściowych:
2
1
4
poprawną odpowiedzią jest:
0 1
2 4
*/

#include <iostream>
#include <string>

using namespace std;

int liczba_przypadkow;
int *silnia;
int wynik=1;

int silnia_funkcja (int n)
{
    wynik=1;
    if (n==0) return 1;
    while (n > 0)
    {
     wynik*= n;
    n--;
    }
    return wynik;
    //else return n*silnia_funkcja(n-1);
}
void jednostki_i_dziesiatki (int j)
{
    cout<<(j/10)%10<<" "<<j%10<<endl;
}
int main()
{
    cin>>liczba_przypadkow;
    int silnia_liczba[liczba_przypadkow];
    if(liczba_przypadkow<1&&liczba_przypadkow>30)
    {
        return 0;
    }
    silnia = new int [liczba_przypadkow-1];
    for(int i=0;i<liczba_przypadkow;i++)
    {
        cin>>silnia[i];
        silnia_liczba[i]=silnia_funkcja(silnia[i]);
        jednostki_i_dziesiatki(silnia_liczba[i]);
    }
    return 0;
}

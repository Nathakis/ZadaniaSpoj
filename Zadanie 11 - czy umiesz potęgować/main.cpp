/*
PA05_POT - Czy umiesz potęgować
Zadanie: POT (Czy umiesz potęgować)
Dla danych dwóch liczb naturalnych a i b, wyznaczyć ostatnią cyfrę liczby ab.
Zadanie
Napisz program, który:
wczyta ze standardowego wejścia: podstawę a oraz wykładnik b,
wyznaczy ostatnią cyfrę liczby ab,
wypisze wynik na standardowe wyjście.
Wejście
W pierwszej linii wejścia znajduje się jedna liczba całkowia D (1≤D≤10), oznaczjąca liczbę przypadków do rozważenia.
Opis każdego przypadku podany jest w jednym wierszu,
zawierającym dwie liczby naturalne a i b oddzielone pojedynczym odstępem (spacją), takie, że (1 ≤ a,b ≤ 1 000 000 000).
Wyjście
Dla każdego przypadku z wejścia Twój program powinien wypisać (w osobnej linii dla każdego przypadku z wejścia)
cyfrę jedności liczby ab zapisanej dziesiętnie.

Przykład
Dla danych wejściowych:
2
2 3
3 3
poprawną odpowiedzią jest:
8
7

*/

#include <iostream>
int liczba_przypadkow,*a,*b;
using namespace std;

int potega_jednosci (int podstawa,int wykladnik)
{
    int wynik=1;
    for(int k=0;k<wykladnik;k++)
    {
        wynik*=podstawa;
    }
    wynik%=10;
    return wynik;
}

int main()
{
    cin>>liczba_przypadkow;
    cout<<endl;
    if(liczba_przypadkow<1||liczba_przypadkow>10)return 0;
    a = new int [liczba_przypadkow];
    b = new int [liczba_przypadkow];
    for(int i=0;i<liczba_przypadkow;i++)
    {
    cin>>a[i]>>b[i];
    if(a[i]<0||a[i]>1000000000||b[i]<0||b[i]>1000000000)return 0;
    cout<<endl;
    }
    for(int j=0;j<liczba_przypadkow;j++)
    {
        cout<<potega_jednosci(a[j],b[j])<<endl;
    }
    return 0;
}

/*
CALC - Kalkulator
Napisz program, który dzia³a jak prosty kalkulator obs³uguj¹cy piêæ operacji: dodawanie, odejmowanie, mno¿enie,
dzielenie i obliczanie reszty z dzielenia liczb ca³kowitych.

Wejœcie
Na wejœcie programu podana zostanie pewna nieokreœlona liczba zestawów danych.
Zestawy sk³adaj¹ siê z jednoznakowego symbolu operacji do wykonania
(+ dodawanie, - odejmowanie, * mno¿enie, / dzielenie ca³kowitoliczbowe, % reszta z dzielenia)
oraz nastêpuj¹cych po nim dwóch liczb ca³kowitych.
Poszczególne sk³adowe zestawu zostan¹ rozdzielone spacjami, a same zestawy znakiem nowej linii.
Liczba testów nie przekracza 100, wynik zawiera siê w typie int32.

Wyjœcie
Na wyjœciu programu ma siê pojawiæ ci¹g liczb bêd¹cych rezultatem wykonania pojawiaj¹cych siê na wejœciu poleceñ.
Poszczególne liczby nale¿y rozdzieliæ znakami nowej linii.
Uwaga! Mo¿na za³o¿yæ, ¿e dane wejœciowe nie zawieraj¹ polecenia dzielenia przez 0.

Przyk³ad
Wejœcie:
+ 7 9
- 0 4
* 5 6
/ 8 3
% 5 2

Wyjœcie:
16
-4
30
2
1
*/
#include <iostream>

using namespace std;
int liczba_testow,*liczba_a,*liczba_b,*wynik;
char znak[99];
int main()
{
    cin>>liczba_testow;
    if(liczba_testow>100)return 0;
    //znak=new int [liczba_testow];
    liczba_a=new int [liczba_testow];
    liczba_b=new int [liczba_testow];
    wynik=new int [liczba_testow];
    for(int i=0;i<liczba_testow;i++)
    {
        cin>>znak[i]>>liczba_a[i]>>liczba_b[i];
        if(znak[i]=='+')
        {
            wynik[i]=liczba_a[i]+liczba_b[i];
        }
        if(znak[i]=='-')
        {
            wynik[i]=liczba_a[i]-liczba_b[i];
        }
        if(znak[i]=='*')
        {
            wynik[i]=liczba_a[i]*liczba_b[i];
        }
        if(znak[i]=='/')
        {
            wynik[i]=liczba_a[i]/liczba_b[i];
        }
        if(znak[i]=='%')
        {
            wynik[i]=liczba_a[i]%liczba_b[i];
        }
    }
    for(int j=0;j<liczba_testow;j++)
    {
        cout<<wynik[j]<<endl;
    }
    return 0;
}

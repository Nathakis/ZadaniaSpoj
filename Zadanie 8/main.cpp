/*
CALC - Kalkulator
Napisz program, kt�ry dzia�a jak prosty kalkulator obs�uguj�cy pi�� operacji: dodawanie, odejmowanie, mno�enie,
dzielenie i obliczanie reszty z dzielenia liczb ca�kowitych.

Wej�cie
Na wej�cie programu podana zostanie pewna nieokre�lona liczba zestaw�w danych.
Zestawy sk�adaj� si� z jednoznakowego symbolu operacji do wykonania
(+ dodawanie, - odejmowanie, * mno�enie, / dzielenie ca�kowitoliczbowe, % reszta z dzielenia)
oraz nast�puj�cych po nim dw�ch liczb ca�kowitych.
Poszczeg�lne sk�adowe zestawu zostan� rozdzielone spacjami, a same zestawy znakiem nowej linii.
Liczba test�w nie przekracza 100, wynik zawiera si� w typie int32.

Wyj�cie
Na wyj�ciu programu ma si� pojawi� ci�g liczb b�d�cych rezultatem wykonania pojawiaj�cych si� na wej�ciu polece�.
Poszczeg�lne liczby nale�y rozdzieli� znakami nowej linii.
Uwaga! Mo�na za�o�y�, �e dane wej�ciowe nie zawieraj� polecenia dzielenia przez 0.

Przyk�ad
Wej�cie:
+ 7 9
- 0 4
* 5 6
/ 8 3
% 5 2

Wyj�cie:
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

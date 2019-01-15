#include <iostream>
/*
PRIME_T - Liczby Pierwsze
SprawdŸ, które spoœród danych liczb s¹ liczbami pierwszymi

Input
n - liczba testów n<100000, w kolejnych liniach n liczb z przedzia³u [1..10000]

Output
Dla ka¿dej liczby s³owo TAK, jeœli liczba ta jest pierwsza, s³owo: NIE, w przeciwnym wypadku.

Example
Input:
3
11
1
4

Output:
TAK
NIE
NIE

*/
using namespace std;
int liczba_testow,*liczby;
bool czy_pierwsza(int a)
{
    if(a<2) return false;
    for(int j=2;j*j<=a;j++)
    {
        if(a%j==0) return true;
    }
    return false;
}
int main()
{
    cin>>liczba_testow;
    if(liczba_testow>=100000) return 0;
    if(liczba_testow<1) return 0;
    liczby = new int [liczba_testow-1];
    for(int i=0;i<liczba_testow;i++)
    {
        cin>>liczby[i];
        if (liczby[i]>=100000) return 0;
    }
    for(int k=0;k<liczba_testow;k++)
    {
        if(czy_pierwsza(liczby[k])==true)
        {
            cout<<"TAK"<<endl;
        }else cout<<"NIE"<<endl;
    }

    return 0;
}

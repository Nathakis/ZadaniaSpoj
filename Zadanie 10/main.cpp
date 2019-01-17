
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

#include <iostream>

using namespace std;
int liczba_testow;
int *cyfry;
bool czy_pierwsza(int sprawdzana)
{
    if(sprawdzana<2)return false;
    for(int i=2;i<=sprawdzana;i++)
        if(sprawdzana%i==0)
        {
        if(sprawdzana==i)return true;
        else return false;
        }
}

int main()
{
    cin>>liczba_testow;
    if(liczba_testow>=100000||liczba_testow<1)return 0;
    cyfry = new int [liczba_testow];
    for(int i=0;i<liczba_testow;i++)
    {
        cin>>cyfry[i];
        if(cyfry[i]<1||cyfry[i]>10000)return 0;
        if(czy_pierwsza(cyfry[i])==true)
        {
            cout<<"TAK"<<endl;
        }
        else
        {
            cout<<"NIE"<<endl;
        }
    }
    return 0;
}

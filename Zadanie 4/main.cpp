#include <iostream>
/*
KC001 - Dodawanie liczb ca�kowitych
Napisz program, kt�ry oblicza sum� trzech liczb ca�kowitych.

Wej�cie
Na wej�cie programu podane zostan� trzy liczby ca�kowite (nieprzekraczaj�ce 100) rozdzielone znakiem nowej linii.

Wyj�cie
Na wyj�ciu ma si� pojawi� suma liczb, kt�re pojawi�y si� na wej�ciu.

Przyk�ad
Wej�cie:
100
-68
12

Wyj�cie:
44
*/

using namespace std;
int liczby[2];
int main()
{
    for(int i=0;i<3;i++)
    {
        cin>>liczby[i];
        if(liczby[i]>100)return 0;
    }
    cout<<liczby[0]+liczby[1]+liczby[2];
    return 0;
}

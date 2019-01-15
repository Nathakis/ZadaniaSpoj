#include <iostream>
/*
KC001 - Dodawanie liczb ca³kowitych
Napisz program, który oblicza sumê trzech liczb ca³kowitych.

Wejœcie
Na wejœcie programu podane zostan¹ trzy liczby ca³kowite (nieprzekraczaj¹ce 100) rozdzielone znakiem nowej linii.

Wyjœcie
Na wyjœciu ma siê pojawiæ suma liczb, które pojawi³y siê na wejœciu.

Przyk³ad
Wejœcie:
100
-68
12

Wyjœcie:
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

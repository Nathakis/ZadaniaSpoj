#include <iostream>
/*zadanie SPOJ
RNO_DOD - Proste dodawanie
Twoim zadaniem jest dodaæ wszystkie liczby ca³kowite podane na wejœciu.

Wejœcie
W pierwszym wierszu znajduje siê liczba t testów (0 < t < 100)
Ka¿dy test opisany jest w nastêpuj¹cy sposób.
W pierwszym wierszu dana jest liczba n - liczba liczb do zsumowania.
Nastêpnie podanych jest n liczb pooddzielanych spacj¹.

Przyk³ad
Input:
2
5
1 2 3 4 5
2
-100 100

Output:
15
0
*/
using namespace std;
int *input;
int n,ile;
int suma=0;
int main()
{
    cin>>n;
    if(n>0&&n<100)
    {
    input = new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>ile;
        for(int j=0;j<ile;j++)
        {
        cin>>input[i];
        suma+=input[i];
        }
        cout<<suma<<endl;
        suma=0;
    }
    }
    return 0;
}

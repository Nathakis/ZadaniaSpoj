#include <iostream>
/*zadanie SPOJ
RNO_DOD - Proste dodawanie
Twoim zadaniem jest doda� wszystkie liczby ca�kowite podane na wej�ciu.

Wej�cie
W pierwszym wierszu znajduje si� liczba t test�w (0 < t < 100)
Ka�dy test opisany jest w nast�puj�cy spos�b.
W pierwszym wierszu dana jest liczba n - liczba liczb do zsumowania.
Nast�pnie podanych jest n liczb pooddzielanych spacj�.

Przyk�ad
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

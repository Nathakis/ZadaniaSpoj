/*
POTSAM - Samolot
Bajtockie Linie Lotnicze wzbogaci�y swoj� flot� o nowy model samolotu.
W samolocie tym jest n1 rz�d�w miejsc siedz�cych w klasie biznesowej oraz n2 rz�d�w w klasie ekonomicznej.
W klasie biznesowej ka�dy rz�d ma k1 miejsc siedz�cych, a w klasie ekonomicznej � k2 miejsc.

Zadanie
Napisz program, kt�ry:
wczyta informacje na temat dost�pnych miejsc siedz�cych w samolocie,
wyznaczy sumaryczn� liczb� wszystkich miejsc siedz�cych,
wypisze wynik
Wej�cie
W pierwszym i jedynym wierszu wej�cia znajduj� si� cztery liczby naturalne n1, k1, n2, i k2 (1<=n1,k1,n2,k2<=1000),
pooddzielane pojedynczymi odst�pami.

Wyj�cie
Pierwszy i jedyny wiersz wyj�cia powinien zawiera� jedn� liczb� ca�kowit� - liczb� miejsc siedz�cych w analizowanym samolocie.

Przyk�ad
Wej�cie
2 5 3 20

Wyj�cie
70
*/
#include <iostream>

using namespace std;
int miejsca_eko_rzad,miejsca_biznes_rzad,rzedy_eko,rzedy_biznes;
int main()
{
    cin>>rzedy_biznes>>rzedy_eko>>miejsca_biznes_rzad>>miejsca_eko_rzad;
    if(miejsca_eko_rzad>1000||miejsca_eko_rzad<1||miejsca_biznes_rzad>1000||miejsca_biznes_rzad<1||rzedy_biznes>1000||
       rzedy_biznes<1||rzedy_eko>1000||rzedy_eko<1) return 0;

    cout<<(rzedy_biznes*miejsca_biznes_rzad)+(rzedy_eko*miejsca_eko_rzad);


    return 0;
}

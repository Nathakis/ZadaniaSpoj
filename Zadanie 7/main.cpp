/*
POTSAM - Samolot
Bajtockie Linie Lotnicze wzbogaci³y swoj¹ flotê o nowy model samolotu.
W samolocie tym jest n1 rzêdów miejsc siedz¹cych w klasie biznesowej oraz n2 rzêdów w klasie ekonomicznej.
W klasie biznesowej ka¿dy rz¹d ma k1 miejsc siedz¹cych, a w klasie ekonomicznej — k2 miejsc.

Zadanie
Napisz program, który:
wczyta informacje na temat dostêpnych miejsc siedz¹cych w samolocie,
wyznaczy sumaryczn¹ liczbê wszystkich miejsc siedz¹cych,
wypisze wynik
Wejœcie
W pierwszym i jedynym wierszu wejœcia znajduj¹ siê cztery liczby naturalne n1, k1, n2, i k2 (1<=n1,k1,n2,k2<=1000),
pooddzielane pojedynczymi odstêpami.

Wyjœcie
Pierwszy i jedyny wiersz wyjœcia powinien zawieraæ jedn¹ liczbê ca³kowit¹ - liczbê miejsc siedz¹cych w analizowanym samolocie.

Przyk³ad
Wejœcie
2 5 3 20

Wyjœcie
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

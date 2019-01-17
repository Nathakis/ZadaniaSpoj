/*
JZLICZ - Zliczacz liter
Koło Młodych Miłośników Łamania Szyfrów pracuje nad odszyfrowaniem pewnego starożytnego manuskryptu.
Jądrem systemu ma być samouczący się analizator tekstu, a jego pierwszym modułem ma być "zliczacz liter",
którego opracowanie powierzono Tobie.
Opracuj program ZLI, który:
- wczyta ze standardowego wejścia tekst do analizy,
- dla każdej litery obliczy liczbę jej wystąpień w tekście,
- wypisze wynik na standardowe wyjście.

Wejście
W pierwszym wierszu N - liczba wierszy tekstu do analizy (N ≤ 150).
W każdym z następujących N wierszy ciąg złożony z maksymalnie 200 znaków spośród małych i wielkich liter
alfabetu łacińskiego ('a'..'z', 'A'..'Z') oraz spacji.

Wyjście
W kolejnych wierszach litery od 'a' do 'z' i od 'A' do 'Z' w tej kolejności,
a po każdej literze spacja i liczba wskazująca, ile razy ta litera wystąpiła w tekście.

Uwaga: Pomiń litery, które nie występują w tekście.

Przykład
Wejście:
2
ala ma kota
Ola ma psa

Wyjście:
a 7
k 1
l 2
m 2
o 1
p 1
s 1
t 1
O 1
*/
#include <iostream>
#include <string>

using namespace std;
string *slowo;
int liczba_slow;
int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,r=0,s=0,t=0,u=0,w=0,z=0;
int Da=0,Db=0,Dc=0,De=0,Df=0,Dg=0,Dh=0,Di=0,Dj=0,Dk=0,Dl=0,Dm=0,Dn=0,Do=0,Dp=0,Dr=0,Ds=0,Dt=0,Du=0,Dw=0,Dz=0;
int main()
{
    cin>>liczba_slow;
    slowo = new string [liczba_slow];
    for(int i=0;i<liczba_slow;i++)
    {
        getline(cin,slowo[i]);
    }

    delete[] slowo;
    return 0;
}

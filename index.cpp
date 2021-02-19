
// Notatki_z_książki_C++

#include<iostream>
#include<climits>
#include<cmath>
#define ZERO 0

using namespace std;

int main()
{

    // POTĘGA

    cout << endl;

    int x = pow(2, 4);

    cout << "2 do potegi 4 rowna sie: " << x << endl;

    cout << "-----------------------------------------------" << endl;

    // PIERWIASTEK

    int z = sqrt(9);

    cout << "Pierwiastek z 9 wynosi: " << z << endl;

    cout << "-----------------------------------------------" << endl;

    // MIN_MAX

    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    // Operator sizeof zwraca wielkość typu lub zmiennej w bajtach

    cout << "int ma: " <<  sizeof(int) << " bajty." << endl;
    cout << "short ma: " << sizeof n_short << " bajty." << endl;
    cout << "long ma: " << sizeof n_long << " bajty." << endl;
    cout << "long long ma: " << sizeof n_llong << " bajtow." << endl << endl;

    cout << "Wartosci maksymalne: " << endl << endl;

    cout << "int ma: " <<  n_int << endl;
    cout << "short ma: " << n_short << endl;
    cout << "long ma: " << n_long << endl;
    cout << "long long ma: " << n_llong << endl << endl;

    cout << "Minimalna wartosc typu int = " << INT_MIN << endl;
    cout << "Bitow na bajt: " << CHAR_BIT << endl;

    cout << "-----------------------------------------------" << endl;

    // Typy bez znaku

    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout << "Sam ma " << sam << " dolarow, a Sue ma " << sue << " dolarow." << endl;
    cout << "Do obu kont dodaj 1$." << endl;
    
    sam += 1;
    sue += 1;

    cout << "Teraz Sam ma " << sam << " dolarow, a Sue ma " << sue << " dolarow." << endl << endl;

    sam = ZERO;
    sue = ZERO;

    cout << "Sam ma " << sam << " dolarow, a Sue ma " << sue << " dolarow." << endl;
    cout << "Zabierzmy z obu kont 1$." << endl;

    sam -= 1;
    sue -= 1;

    cout << "Teraz Sam ma " << sam << " dolarow, a Sue ma " << sue << " dolarow." << endl;
    
    cout << "-----------------------------------------------" << endl;

    // Literały całkowitoliczbowe

    /*

    Jeśli pierwsza cyfra jest z zakresu od 1 do 9, 
    to podstawą systemu jest 10.
    Zatem 93 to liczba zapisany w systemie dziesiętnym.

    Jeśli pierwsza cyfra jest 0, 
    a druga jest z zakresu od 1 do 7, to podstawą systemu jest 8.
    042 jest zapisane ósemkowo -->> dziesiętnie 34.

    Jeśli dwa pierwsze znaki to 0x lub 0X, 
    to mamy doczynienia z systemem szesnastkowym.

    */
    
    // Manipulatory - dec, hex, oct - odpowiednio -->> dziesiętnie, szesnastkowo, ósemkowo 
   
    // Wyświetlanie domyślne - dziesiętne

    int chest = 42;
    int waist = 0x42;
    int inseam = 042;

    cout << "Co za figura!\n";
    cout << "Obwod piersi = " << chest << " (42 dziesietnie)" << endl;
    cout << "Talia = " << waist << " (0x42 szestnastkowo)" << endl;
    cout << "Dlugosc nogawki = " << inseam << " (042 osemkowo)" << endl << endl;

    // Wyświetlanie szesnastkowe, ósemkowe

    int obwod_piersi = 42;
    int talia = 42;
    int dl_nogawki = 42;

    cout << "Co za figura!\n";
    cout << "Obwod piersi = " << obwod_piersi << " (42 dziesietnie)" << endl;
    cout << hex;
    cout << "Talia = " << talia << " (42 szestnastkowo)" << endl;
    cout << oct;    
    cout << "Dlugosc nogawki = " << dl_nogawki << " (42 osemkowo)" << endl;

    cout << "-----------------------------------------------" << endl;

    // Typ - char

    char ch = 'M';
    int i = ch;

    cout << "Kod ASCII znaku " << ch << " to " << i << endl;
    cout << "Dodajemy do kodu znaku jedynke:" << endl;

    ch += 1;
    i = ch;

    cout << "Kod ASCII znaku " << ch << " to " << i << endl;

    cout << "Uzycie metody cout.put() do pokazania znaku: ";

    cout.put(ch);
    cout.put('!') << endl;

    cout << "Gotowe!!!" << endl;

    cout << "-----------------------------------------------" << endl;
    

    return 0;
}

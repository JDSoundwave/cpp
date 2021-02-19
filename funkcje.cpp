
// FUNKCJE

#include<iostream>

using namespace std;


int metry;


// FUNKCJA --1-- metry na cale

float ile_cali(float m)
{
    return 39.37 * m;
}

// KONIEC FUNKCJI --1--



// FUNKCJA --2-- metry na jardy

float ile_jardow(float x);

// KONIEC FUNKCJI



// PROCEDURA void --3-- 

void ile_mil(float z)
{
    cout << z * 0.0006213;
}

// KONIEC PROCEDURY --3--



// PROCEDURA void --4--

void metry_na_mile(float n);

// KONIEC PROCEDURY --4--



int main()
{

    cout << "Podaj ile metrow zamienic: ";

        cin >> metry;

    cout << metry << " metrow to: " << ile_cali(metry) << " cali." << endl;
    cout << metry << " metrow to: " << ile_jardow(metry) << " jardow." << endl;
    cout << metry << " metrow to: ";   ile_mil(metry); cout << " mil." << endl;
    cout << metry << " metrow to: ";   metry_na_mile(metry); cout << " mil.";


    return 0;
}

// FUNKCJA --2-- metry na jardy

float ile_jardow(float x)
{
    return x * 1.0936;
}

// PROCEDURA void --4-- metry na mile

void metry_na_mile(float n)
{
    cout << n * 0.0006213;
}
#include <iostream>

using namespace std;

int main()
{
    while ( true )
 {
    string instrukcja;
    cout << "Podaj instrukcje. (dodaj) (odejmij) (podziel) (pomnoz)" << endl;
    getline( cin, instrukcja );
    if ( instrukcja == "dodaj" )
    {
        double liczba2;
        double liczba1;

        cout << "podaj liczbe ";
        cin >> liczba1;
        cout << "Podaj liczbe 2 ";
        cin >> liczba2;
        double wynik = liczba1 + liczba2;
        cout << "Wynik: " << wynik << "/n";
    }
else if ( instrukcja == "odejmij" )
    {
        double liczba2;
        double liczba1;

        cout << "podaj liczbe ";
        cin >> liczba1;
        cout << "Podaj liczbe 2 ";
        cin >> liczba2;
        double wynik = liczba1 - liczba2;
        cout << "Wynik: " << wynik << "/n";
    }
    else if ( instrukcja == "podziel" )
    {
        double liczba2;
        double liczba1;

        cout << "podaj liczbe ";
        cin >> liczba1;
        cout << "Podaj liczbe 2 ";
        cin >> liczba2;
        double wynik = liczba1 / liczba2;
        cout << "Wynik: " << wynik << "/n";
    }
    else if ( instrukcja == "pomnoz" )
    {
        double liczba2;
        double liczba1;

        cout << "podaj liczbe ";
        cin >> liczba1;
        cout << "Podaj liczbe 2 ";
        cin >> liczba2;
        double wynik = liczba1 * liczba2;
        cout << "Wynik: " << wynik << "/n";
    }
    else
    {
        cout << "bledna komenda ";
    }
}

}

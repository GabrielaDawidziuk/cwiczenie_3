#include "struktura.hpp"
#include "funkcje.hpp"

int main ()
{
    string o_nazwa, z_nazwa;
    cout << "Podaj nazwe pliku do odczytu ( wraz z rozszerzeniem ): "; cin >> o_nazwa;
    cout << "Podaj nazwe pliku do zapisau ( wraz z rozszerzeniem ): "; cin >> z_nazwa;
    wyswietl(wczytaj(o_nazwa));
    cout << "Srednia wartosc x: " << srednia(wczytaj(o_nazwa)) << endl;
    cout << "Minimum wartosci x: " << minimum(wczytaj(o_nazwa)) << ", Maksimum wartosci x: " << maksimum(wczytaj(o_nazwa)) << endl;
    zapisz(wczytaj(o_nazwa), z_nazwa);
    cout << "Calka metoda trapezow: " << calkuj(wczytaj(o_nazwa));
}

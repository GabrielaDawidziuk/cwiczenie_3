#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class Probka
{
    public:
    double x;
    double y;
    Probka(double xx, double yy)
    {
        x=xx;
        y=yy;
    }
};

vector<Probka> wczytaj_dane(string plik)
{
    while (getline(plik,linia))
    {
        stringstream ss(linia);
        ss>>x1;
        ss.ignore();
        ss>>x2;
        dane.push_back(Probka (x1,x2));


    }

}
int main( int argc, char* argv[])
{
    double x1,x2;
    string linia;
    typedef pair <double, double> Probka;
    ifstream plik ("sygnal.csv");

    return 0;
}

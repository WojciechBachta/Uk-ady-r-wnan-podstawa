#include "Macierz.hh"
using namespace std;
#include "Wektor.hh"

/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy Macierz, ktore zawieraja wiecej kodu
 *  niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */

 //double WezElem(int i, int j)
 //{
 //}



 //MODYFIKACJA

const Macierz Macierz::operator * () const
{
    Macierz Wynik;
    for(int i=0; i<ROZMIAR; i++)
    {
        for(int j=0; j<ROZMIAR; j++)
        Wynik._SkladnikiM[i]._SkladnikiW[j]=this->_SkladnikiM[i]._SkladnikiW[j]*this->_SkladnikiM[i]._SkladnikiW[j];
    }
    return Wynik;

}

// Wektor._SkladnikiM[i]._SkladnikiW[j]*Wektor._SkladnikiM[i]._SkladnikiW[j]


 std::ostream& operator << (std::ostream &Strm, const Macierz &Mac)
 {
    Wektor W;
    for(int i = 0; i < ROZMIAR; i++)
    {
        Strm << Mac[i] << "\n";
    }
 }

 std::istream& operator >> (std::istream &Strm, Macierz &Mac)
 {
    for(int i=0; i<ROZMIAR; i++)
    {
        Strm >> Mac[i];
    }

 }
/*
const Wektor & Macierz::operator[] (int index) const
{
    if (index < 0 || index > ROZMIAR)
    {
        std::cerr << "indeks poza zakresem\n";
        exit(1);
    }
    return (this->_SkladnikiM[index]);
}

Wektor & Macierz::operator[] (int index)
{
    if (index < 0 || index > ROZMIAR)
    {
        std::cerr << "indeks poza zakresem\n";
        exit(1);
    }
    return (this->_SkladnikiM[index]);
}
*/

/*
 std::istream& operator >> (std::istream &Strm, Macierz &Mac)
 {
    Strm >> Mac.WezWiersz(0) >> Mac.WezWiersz(0) >> Mac.WezWiersz(0);
    return Strm;

 }
*/

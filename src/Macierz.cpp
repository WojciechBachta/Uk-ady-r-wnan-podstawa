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



 std::ostream& operator << (std::ostream &Strm, Macierz &Mac)
 {
    Strm << Mac.WezWiersz(0) << endl << Mac.WezWiersz(0) << endl << Mac.WezWiersz(0);
    return Strm;
 }
/*
 std::istream& operator >> (std::istream &Strm, Macierz &Mac)
 {
    Strm >> Mac.WezWiersz(0) >> Mac.WezWiersz(0) >> Mac.WezWiersz(0);
    return Strm;

 }
*/

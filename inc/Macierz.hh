#ifndef MACIERZ_HH
#define MACIERZ_HH

#include "rozmiar.h"
#include <iostream>

#include "Wektor.hh"
using namespace std;

/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
class Macierz {



  /*
   *  Tutaj trzeba wstawic definicje odpowiednich pol i metod prywatnych
   */
  public:
    Wektor _SkladnikiM[ROZMIAR];

   Wektor WezWiersz(int wiersz)const{
   return _SkladnikiM[wiersz];
   }
   void ZamienWiersz(int wiersz, Wektor W){
    _SkladnikiM[wiersz]=W;
   }
    const Wektor & operator[] (int index) const{
    return (this->_SkladnikiM[index]);
    }
    Wektor & operator[] (int index){
    return (this->_SkladnikiM[index]);
    }

    const Macierz operator * () const;

  /*
   *  Tutaj trzeba wstawic definicje odpowiednich metod publicznych
   */
   //double WezElem(int i, int j);

};


/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt
 */
std::istream& operator >> (std::istream &Strm, Macierz &Mac);

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt
 */
std::ostream& operator << (std::ostream &Strm, const Macierz &Mac);


#endif

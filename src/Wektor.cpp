#include "Wektor.hh"
using namespace std;

/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy Wektor, ktore zawieraja wiecej kodu
 *  niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */

/*
    void Wektor::Dodaj(Wektor& W)
    {
        Wektor Z;
        Z._Skladniki[0]=_Skladniki[0]+W.Wez(0);
        Z._Skladniki[1]=_Skladniki[1]+W.Wez(1);
        Z._Skladniki[2]=_Skladniki[2]+W.Wez(2);
        return Z;
    }
*/


    std::ostream& operator << (std::ostream &Strm, const Wektor &Wek)
    {
        Strm << "[" << Wek.Wez(0) << ',' << Wek.Wez(1) << ',' << Wek.Wez(2) << "]";
        return Strm;
    }
/*
    std::istream& operator >> (std::istream &Strm, Wektor &Wek)
    {
        Strm >> Wek.Wez(0) >> Wek.Wez(1) >> Wek.Wez(2);
        return Strm;
    }
*/
    Wektor operator + (Wektor W, Wektor Z)
    {
        Wektor Wynik;
        Wynik.Zamien(0,W.Wez(0)+Z.Wez(0));
        Wynik.Zamien(1,W.Wez(1)+Z.Wez(1));
        Wynik.Zamien(2,W.Wez(2)+Z.Wez(2));
    return Wynik;
    }

    Wektor operator - (Wektor W, Wektor Z)
    {
        Wektor Wynik;
        Wynik.Zamien(0,W.Wez(0)-Z.Wez(0));
        Wynik.Zamien(1,W.Wez(1)-Z.Wez(1));
        Wynik.Zamien(2,W.Wez(2)-Z.Wez(2));
    return Wynik;
    }

    int operator * (Wektor W, Wektor Z)
    {
        int Wynik = (W.Wez(0)*Z.Wez(0)+W.Wez(1)*Z.Wez(1)+W.Wez(2)*Z.Wez(2));
        return Wynik;
    }

    Wektor operator * (Wektor W, double Z)
    {
        Wektor Wynik;
        Wynik.Zamien(0,W.Wez(0)*Z);
        Wynik.Zamien(1,W.Wez(1)*Z);
        Wynik.Zamien(2,W.Wez(2)*Z);
    return Wynik;
    }

    Wektor operator / (Wektor W, double Z)
    {
        Wektor Wynik;
        Wynik.Zamien(0,W.Wez(0)/Z);
        Wynik.Zamien(1,W.Wez(1)/Z);
        Wynik.Zamien(2,W.Wez(2)/Z);
    return Wynik;
    }



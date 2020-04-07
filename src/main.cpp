#include <iostream>
#include "Wektor.hh"
#include "Macierz.hh"
#include "UkladRownanLiniowych.hh"








using namespace std;

/*
 * Tu definiujemy pozostale funkcje.
 * Lepiej jednak stworzyc dodatkowy modul
 * i tam je umiescic. Ten przyklad pokazuje
 * jedynie absolutne minimum.
 */


int main()
{
  UkladRownanLiniowych   UklRown;   // To tylko przykladowe definicje zmiennej


  cout << endl << " Start programu " << endl << endl;



  Wektor W;
  Wektor Z;
  Wektor Y;


  W.Zamien(0, 1);
  W.Zamien(1, 2);
  W.Zamien(2, 3);

  Z.Zamien(0, 4);
  Z.Zamien(1, 5);
  Z.Zamien(2, 6);

  Y.Zamien(0, 0);
  Y.Zamien(1, 0);
  Y.Zamien(2, 0);
/*
    Y=Z+W;
cout << Y << endl;
Y=Z-W;
cout << Y << endl;
double x;
x=Z*W;
cout << x << endl;
Y=Z*3;
cout << Y << endl;
Y=Z/3;
cout << Y << endl;

Macierz Mac;
cout << Mac << endl;
*/
cout << "Wektory" << endl;
cout << W << endl;
cout << Z << endl;
cout << "Iloczyn wektorowy:" << endl;
Y=W*Z;

cout << Y << endl;
cout << endl;
cout << endl;
cout << "Macierz" << endl;


Macierz Wynik;
Wynik.ZamienWiersz(0, W);
Wynik.ZamienWiersz(1, Z);
Wynik.ZamienWiersz(2, W);

cout << Wynik << endl;
cout << "Macierz do kwadratu:" << endl;

Wynik = *Wynik;
cout << Wynik << endl;


}

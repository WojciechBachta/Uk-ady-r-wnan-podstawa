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


  W.Zamien(0, 3);
  W.Zamien(1, 8);
  W.Zamien(2, 4);

  Z.Zamien(0, 5);
  Z.Zamien(1, 0);
  Z.Zamien(2, 4);

  Y.Zamien(0, 0);
  Y.Zamien(1, 0);
  Y.Zamien(2, 0);

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





}

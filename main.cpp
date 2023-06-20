#include <iostream>
#include "point.h"

using namespace std;

int main()
{

     Point p1, p2(p1), p3(4,9);

    cout << "Geste des objets Point" << endl;

    p1.setAbscisse(8);
    p1.setOrdonnee(13);

    cout<< "Premier point: ("<<p1.getAbscisse() << " , "
      <<p1.getOrdonnee()
      << " ) " <<endl;

      p2 = p1;
      cout<< "Deuxieme point: ("<<p2.getAbscisse() << " , "
      <<p2.getOrdonnee()
      << " ) " <<endl;


      cout<< "Troisieme point: ("<<p3.getAbscisse() << " , "
      <<p3.getOrdonnee()
      << " ) " <<endl;



    return 0;
}

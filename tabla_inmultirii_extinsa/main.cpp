#include <iostream>

using namespace std;

/* Scrieți un program care să afișeze tabla înmulțirii până la 25, adică fiecare număr de la 1 la 25 înmulțit pe rând cu toate numerele de la 1 la 25. */

int main()
{
    short numar;

    for(int i = 1; i <= 25; ++i){

        for (int j = 1; j <= 25; ++j){
            numar = i * j;
            cout << numar << " ";

        }
        cout << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

/* Scrieți un program care

Citește de la tastatură trimestrul (1-4).
Dacă numărul introdus nu este 1, 2, 3 sau 4 afișează doar un mesaj de eroare semnalând asta
Dacă numărul introdus este 1, 2, 3 sau 4 afișează profitul firmei pe trimestrul respectiv, adică 3000
pentru trim. I, 5000 pentru trim. al II-lea, 4000 pentru trim.al III-lea sau 2500 pentru trim.al IV-lea.
Dacă trimestrul introdus este 1 afișează și bilanțul pe anul anterior, în valoare de 8375 */

int main()
{

    cout << "Alegeti trimestrul pe care vreti sa-l afisati(1 - 4)\n";
    short raspuns;
    cin >> raspuns;

    while(raspuns < 1 || raspuns > 4){

        cout << "Nu a-ti ales un trimestru valid, va rugam alegeti din nou\n";
        cin >> raspuns;
    }

    switch (raspuns) {
    case 1 : cout << "Profitul firmei pe trimestrul I este 3000 iar bilantul pe anul anterior este 8375\n"; break;
    case 2 : cout << "Profitul firmei pe trimestrul II este 5000\n"; break;
    case 3 : cout << "Profitul firmei pe trimestrul III este 4000\n"; break;
    case 4 : cout << "Profitul firmei pe trimestrul IV este 2500\n"; break;

    }
    return 0;
}

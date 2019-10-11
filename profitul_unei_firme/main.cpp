 #include <iostream>

using namespace std;

/* Scrieți un program care:

1. Citește de la tastatură trimestrul (1-4).
2. Dacă numărul introdus nu este 1, 2, 3 sau 4 afișează doar un mesaj de eroare semnalând asta
3. Dacă numărul introdus este 1, 2, 3 sau 4 afișează profitul firmei pe trimestrul respectiv, adică 3000 pentru trim. I, 5000 pentru trim. al II-lea,
   4000 pentru trim.al III-lea sau 2500 pentru trim.al IV-lea.
4. Dacă trimestrul introdus este 1 afișează și bilanțul pe anul anterior, în valoare de 8375.*/

int main()
{
    int trimI = 3000;
    int trimII = 5000;
    int trimIII = 4000;
    int trimIV = 2500;
    int bilant = 8375;
    char raspuns;

    cout << "Alegeti trimestrul pe care vreti sa-l afisati\n";
    cin >> raspuns;

    while(raspuns < 49 || raspuns > 52){

        cout << "Nu a-ti ales un trimestru valid, va rugam alegeti din nou\n";
        cin >> raspuns;
    }

    if(raspuns == '1'){
        cout << "Profitul firmei pe trim. I este de " << trimI << " iar bilantul pe anul anterior este " << bilant << endl;
    }
    if(raspuns == '2'){
        cout << "Profitul firmei pe trim. II este de " << trimII << endl;
    }
    if(raspuns == '3'){
        cout << "Profitul firmei pe trim. III este de " << trimIII << endl;
    }
    if(raspuns == '4'){
        cout << "Profitul firmei pe trim. IV este de " << trimIV << endl;
    }


    return 0;
}

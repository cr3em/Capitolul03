#include <iostream>

using namespace std;

/* Scrieți un program care citește un număr întreg NR de la tastatură, numără câte cifre are și afișează această informație.
Un posibil algoritm care să numere cifrele numărului este următorul:
Într-o instrucțiune iterativă:

Atribuiți variabilei NR valoarea ei împărțită la 10
Incrementați o variabilă contor
Verificați dacă variabila NR e diferită de 0 */

int main()
{
    cout << "Introdu numar de verificat\n";
    int nr;
    cin >> nr;

    for(int i = 1; nr != 0 ; ++i){
        nr = nr / 10;
        cout << "Contor " << i << endl;
    }

    return 0;
}

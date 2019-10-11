
#include <iostream>

using namespace std;

/*Scrieți un program care permite calcularea prețului final al unei mașini. Specificațiile sunt următoarele:

1. Se pleacă de la un preț inițial de 7000 de Euro, stabilit în program.
2. Utilizatorului e întrebat, pe rând dacă vrea următoarele opțiuni suplimentare: climă (500 Euro), tracțiune 4x4 (1000 Euro), scaune de piele (250 Euro), 8 boxe (125 Euro)
3. Pentru fiecare opțiune, veți citi de la tastatură un caracter pe post de răspuns. Dacă acest caracter e 'd' sau 'D', se adaugă la prețul mașinii prețul opțiunii.
4. La final se afișează prețul total.*/

int main()
{
    int pretMasina = 7000;
    int optClima = 500;
    int optTractiune = 1000;
    int optPiele = 250;
    int optBoxe = 125;
    char raspunsClient = 100;

    cout << "Pretul standard al masini este de " << pretMasina << " Euro\n";
    cout << "Doriti sa adaugam clima la masina, costa doar 500 Euro?\n";
    cin >> raspunsClient;

    if(raspunsClient == 100 || raspunsClient == 68){
        pretMasina = pretMasina + optClima;
        cout << "Pretul masini cu clima inclusa este de  " << pretMasina << endl;

    }

    cout << "Se poate alege si varianta cu tractiune integrala, aceasta costa 1000 Euro, ce ziceti?\n";
    cin >> raspunsClient;

    if(raspunsClient == 100 || raspunsClient == 68){
        pretMasina = pretMasina + optTractiune;
        cout << "Noul pret va fi de  " << pretMasina << " Euro\n";

    }

    cout << "Pentru inca 250 Euro puteti avea si scaune de piele, ce ziceti?\n";
    cin >> raspunsClient;

    if(raspunsClient == 100 || raspunsClient == 68){
        pretMasina = pretMasina + optPiele;
        cout << "Noul pret va fi de  " << pretMasina << " Euro\n";
    }

    cout << "Ultima optiune care o avem este un sistem audio cu 8 boxe, doriti sa adaugam?\n";
    cin >> raspunsClient;

    if(raspunsClient == 100 || raspunsClient == 68){
        pretMasina = pretMasina + optBoxe;
        cout << "Pretul final cu optiunile alese este  " << pretMasina << " Euro\n";
    }
    else {
        cout << "Pretul masini ramane neschimbat, aveti sa-mi dati " << pretMasina << " Euro\n";
    }


    return 0;
}

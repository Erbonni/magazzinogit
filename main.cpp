#include <iostream>
#include "Dichiarazione_Variabili.h"
using namespace std;

int main() {

    int scelta, nProdotti;
    bool abilitazione=false;
    do {
        cout<<"Quanti prodotti vuoi inserire in magazzino?"<<endl;
        cin>>nProdotti;
    } while (nProdotti <= 0);
    float m[nProdotti][colonne];
    do {
        cout << "\nMENU\n";
        cout << " 1. Inserire quantita' prodotti e prezzi\n 2. Visualizzare magazzino\n 3. Valore totale dei prodotti\n";
        cout<<" 4. Individuare prodotto con più unità\n 5. Valore totale magazzino\n 6. Prodotto con valore maggiore\n 0. Esci\n";
        cin >> scelta;

        switch (scelta) {

        case 1:
            inserisciProdotti(m, nProdotti);
            abilitazione=true;
            break;

        case 2:
            if (abilitazione)
                stampaProdotti(m, nProdotti);
            else
                seNonAbilitato();
            break;

        case 3:
            if (abilitazione)
                totaleProdotto(m, nProdotti);
            else
                seNonAbilitato();
            break;

        case 4:
            piuPresente(m, nProdotti);
            abilitazione=true;
            break;

        case 5:
            if (abilitazione)
                valoreMagazzino(m, nProdotti);
            else
                seNonAbilitato();
            break;

        case 6:
            if (abilitazione)
               valoreMaggiore(m, nProdotti);
            else
                seNonAbilitato();
            break;
        case 0:
            cout << "Uscita\n";
            break;

        default:
            cout << "Scelta non valida\n";
        }

    } while (scelta != 0);

    return 0;
}
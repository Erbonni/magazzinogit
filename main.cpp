#include <iostream>
#include "Dichiarazione_Variabili.h"
using namespace std;

//prodotti = 8;
int colonne = 2;
int prodotti = 7;


int main() {
    prodotti = 10;
    seNonAbilitato();
    /*

    float m[prodotti][colonne];
    int scelta;
    bool abilitazione=false;
    int nProdotto, qProdotto, pProdotto;
    int righe, colonne;
    int colonne=2;

    do {
        cout << "\nMENU\n";
        cout << " 1. Inserire numero prodotti e prezzi\n 2. Visualizzare magazzino\n 3. Valore totale di un prodotto\n"<<endl;
        cout<<" 4. Individuae prodotto con più unità\n 5. Valore totale magazzino\n 6. Prodotto con valore maggiore\n 0. Esci\n";
        cin >> scelta;

        switch (scelta) {

        case 1:
            inserisciProdotti(m);
            abilitazione=true;
            cout<<"Inserire quanti tipi di prodotti sono in magazzino"<<endl;
            cin>>nProdotto;

            cout<<"Inserire il prezzo del prodotto"<<endl;
            cin>>pProdotto;

            cout<<"Inserire la quantità del prodotto"<<endl;
            cin>>qProdotto;



            break;

        case 2:
            if (abilitazione)
                mostraTabella(m);

            for (int i=0, i<nProdotto, i++) {
                for (int j=0; j<colonne; j++) {
                    cout << m[i][j] << "\t";
            }
            }


            else
                seNonAbilitato();
            break;

        case 3:
            if (abilitazione)
                totaleProdotto(m);
            else
                seNonAbilitato();
            break;

        case 4:
            piuPresente(m);
            abilitazione=true;
            break;

        case 5:
            if (abilitazione)
                valoreMagazzino(m);
            else
                seNonAbilitato();
            break;

        case 6:
            if (abilitazione)
                piucostoso(m);
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
*/
    return 0;
}
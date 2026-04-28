#include <iostream>
#include "Dichiarazione_Variabili.h"
using namespace std;

void inserisciProdotti(float matrice[][colonne], int righe) {
    for (int i = 0; i < righe; i++) {
        cout<<"Prodotto "<<i+1<< endl;
        // Inserimento Quantità
        cout << "Inserisci la quantità: ";
        cin >> matrice[i][0];
        // Inserimento Prezzo
        cout << "Inserisci il prezzo: ";
        cin >> matrice[i][1];
    }
}

#include <iostream>
using namespace std;

const int COL = 2;

void stampaProdotti(int matrice[][colonne], int n) {
    // tabella
    cout << "\nPRODOTTO\tQUANTITA'\tPREZZO" << endl;

    for (int i = 0; i < n; i++) {
        // indice del prodotto
        cout << i + 1 << "\t\t";

        // quantità
        cout << matrice[i][0] << "\t\t";

        // prezzo
        cout << matrice[i][1] << " euro" << endl;
    }
}

void seNonAbilitato(){
    cout<<"Si prega di inserire dei valori almeno una volta\n";
}

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

void stampaProdotti(int matrice[][colonne], int righe) {
    // tabella
    cout << "\nPRODOTTO\tQUANTITA'\tPREZZO" << endl;

    for (int i = 0; i < righe; i++) {
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

void totaleProdotto(float m[][colonne], int righe) {

    cout << "\nVALORE DI OGNI PRODOTTO:\n";

    for (int i = 0; i < righe; i++) {
        float totale = m[i][0] * m[i][1];

        cout << "Prodotto " << i + 1 << ": "
             << totale << " euro" << endl;
    }
}

void valoreMagazzino(float m[][colonne], int righe) {

    float somma = 0;

    for (int i = 0; i < righe; i++) {
        somma += m[i][0] * m[i][1];
    }

    cout << "\nValore totale del magazzino: "
         << somma << " euro" << endl;
}
void piuPresente(float m[][colonne], int righe) {
    float maxUnita = m[0][0];
    int indiceMax = 0;

    for (int i = 1; i < righe; i++) {
        if (m[i][0] > maxUnita) {
            maxUnita = m[i][0];
            indiceMax = i;
        }
    }

    cout << "\nIl prodotto con piu' unita' e' il numero: " << indiceMax + 1
         << " (Quantita': " << maxUnita << ")" << endl;
}

void valoreMaggiore(float m[][colonne], int righe) {
    float maxValore = m[0][0] * m[0][1];
    int indiceMax = 0;

    for (int i = 1; i < righe; i++) {
        float valoreAttuale = m[i][0] * m[i][1];
        if (valoreAttuale > maxValore) {
            maxValore = valoreAttuale;
            indiceMax = i;
        }
    }

    cout << "\nIl prodotto con il valore totale piu' alto e' il numero: " << indiceMax + 1
         << "Valore: " << maxValore << " euro" << endl;
}
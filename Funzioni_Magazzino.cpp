#include <iostream>
#include "Dichiarazione_Variabili.h"
using namespace std;
//punti 4 e 6
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
         << " (Valore: " << maxValore << " euro)" << endl;
}
#include <stdio.h>
#include <stdlib.h>
#include "InputVet.h"
#include "VerificheGare.h"
#include "output.h"
#define MAX 10
int main(){
    int corridori1[MAX], corridori2[MAX], corridorisoloprima[MAX], corridorisoloseconda[MAX], corridorientrambi[MAX], max1, max2, max3; //Dichiarazione delle seguente variabili e dei seguenti vettori

    inputvet(corridori1, corridori2, MAX); //Input dei vettori

    max1 = verificaprimagara(corridori1, corridori2, corridorisoloprima, MAX); //Mette i corridori che hanno partecipato solo alla prima gara nel 3° vettore caricato nella funzione, inoltre calcola la dimensione del terzo vettore
    max2 = verificasecondagara(corridori1, corridori2, corridorisoloseconda, MAX); //Mette i corridori che hanno partecipato solo alla seconda gara nel 3° vettore caricato nella funzione, inoltre calcola la dimensione del terzo vettore
    max3 = verificaentrambe(corridori1, corridori2, corridorientrambi, MAX); //Mette i corridori che hanno partecipato a entrambe nel 3° vettore caricato nella funzione, inoltre calcola la dimensione del terzo vettore

    outputprimagara(corridorisoloprima, max1); //Output del vettore in prima posizione
    outputsecondagara(corridorisoloseconda, max2); //Output del vettire in seconda posizione
    outputentrambe(corridorientrambi, max3); //Output del vettore in terza posizione

}
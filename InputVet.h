#ifndef INPUTVETTORE_H_INCLUDED
#define INPUTVETTORE_H_INCLUDED

void inputvet(int *a, int *b, int max){ //Funzione che richiede la main 2 vettori e una variabile
    int i; //Dichiarazione della variabile i

    for(i = 0; i < max; i++){ //Ciclo for che stabilisce le seguenti istruzioni:  i è uguale a 0; i deve essere minore di max; i incrementa di 1
        printf("Inserisci l'atleta numero %d della gara numero 1\n", i + 1); //Stampa la seguente frase (al posto di %d mette il valore di i + 1)
        scanf("%d", &a[i]); //Chiede all'utente di mettere in input il valore di a[i]
    }
    //Il secondo for è identico al primo, cambia leggermente la frase e cambia l'input (passa da a[i] a b[i])
    for(i = 0; i < max; i++){ 
        printf("Inserisci l'atleta numero %d della gara numero 2\n", i + 1);
        scanf("%d", &b[i]);
    }
}

#endif
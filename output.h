#ifndef OUTPUT_H_INCLUDED
#define OUTPUT_H_INCLUDED
//PROTOTIPI FUNZIONI
void outputprimagara(int *c, int max);
void outputsecondagara(int *c, int max);
void outputentrambe(int *c, int max);
/* NOTA BENE: Visto che le tre funzioni sono praticamente identiche (cambia solo il vettore da visualizzare), commento solo la prima funzione */
void outputprimagara(int *c, int max){ //Inizio funzione che richiede un vettore e una variabile dal main
    int i; //Dichiara i
    printf("Le presone che hanno partecipato solo alla prima gara sono i seguenti: \n"); //Stampa la seguente frase
    for(i = 0; i < max; i++){ //Inizio ciclo for che stabilisce che: i = 0; i deve essere minore di max, i incrementa di 1
        printf("%d\n", c[i]); //Stampa il valore di c[i] e va a capo
    }
}
void outputsecondagara(int *c, int max){
    int i;
    printf("Le presone che hanno partecipato solo alla seconda gara sono i seguenti: \n");
    for(i = 0; i < max; i++){
        printf("%d\n", c[i]);
    }
}
void outputentrambe(int *c, int max){
    int i;
    printf("Le presone che hanno partecipato a entrambe le gare sono i seguenti: \n");
    for(i = 0; i < max; i++){
        printf("%d\n", c[i]);
    }
}

#endif
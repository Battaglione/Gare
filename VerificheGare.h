#ifndef VERIFICHEGARE_H_INCLUDED
#define VERIFICHEGARE_H_INCLUDED
//PROTOTIPI FUNZIONI
int verificaprimagara(int *a, int *b, int *c, int max);
int verificadsecondagara(int *a, int *b, int *c, int max);
int verificaentrambe(int *a, int *b, int *c, int max);
/*NOTA BENE: Visto che le prime 2 funzioni sono simili, commento solo la prima */
int verificaprimagara(int *a, int *b, int *c, int max){ //Inizio funzione che richiede 3 vettori e una variabile dal main
    int i, j, k, cont; //Dichiarazione delle seguenti variabili
    k = 0; //K è uguale a 0
    for(i = 0; i < max; i++){  //Ciclo for che stabilisce le seguenti istruzioni: i è uguale a 0; i deve essere minore di max; i incrementa di 1
        cont = 0; //cont è uguale a 0
        for(j = 0; j < max; j++){ //Ciclo for che stabilisce le seguenti istruzioni:  j è uguale a; j deve essere minore di max; j incrementa di 1
            if(a[i] != b[j]){ //Se a[i] è diverso da b[j]
                cont++; //Incrementa cont
            }
            else{ //Se falso
                j = max; //j sarà uguale a max (esce dal for)
            }
        }
        if(cont == max){ //Se cont è uguale a max
            c[k] = a[i]; //c[k] sarà uguale ad a[i]
            k++; //Incrementa k
        }
    }
    return k; //Ritorna al main il valore di k
}
int verificasecondagara(int *a, int *b, int *c, int max){
    int i, j, k, cont;
    k = 0;
    for(i = 0; i < max; i++){
        cont = 0;
        for(j = 0; j < max; j++){
            if(b[i] != a[j]){
                cont++;
            }
            else{
                j = max;
            }
        }
        if(cont == max){
            c[k] = b[i];
            k++;
        }
    }
    return k;
}
int verificaentrambe(int *a, int *b, int *c, int max){ //Inizio funzione che richiede 3 vettori e una variabile dal main
    int i, j, k; //Dichiarazione di queste variabili
    k = 0; //k è uguale a 0
    for(i = 0; i < max; i++){ //Ciclo for che stabilisce le seguenti istruzioni:  i è uguale a 0; i deve essere minore di max; i incrementa di 1
        for(j = 0; j < max; j++){ //Ciclo for che stabilisce le seguenti istruzioni: j è uguale a 0; j deve essere minore di max; j incrementa di 1
            if(a[i] == b[j]){ //Se a[i] è uguale a b[j]
                c[k] = a[i]; //c[k] è uguale ad a[i]
                k++; //Incrementa k
            }
        }
    }
    return k; //Ritorna al main il valore di k
}




#endif
/* Crie um ponteiro que receba 5 valores inteiros (10, 20, 30, 40, 50). Crie um
vetor de 5 posições e copie os valores do ponteiro para o vetor. Imprima os
valores de cada item lado a lado. */
#include <stdio.h>
#include <stdlib.h>
#define LENGTH 5
int main() {
    int* p = (int *) malloc(5*sizeof(int));
    int vetor[LENGTH] = {};
    int i = 0;
    int valor = 10;
    for(i; i < LENGTH; i++) {
        *p = valor;
        p++;
        valor += 10;
    }
    p -= LENGTH;
    i = 0;
    for(i; i < LENGTH; i++) {
        vetor[i] = *p;
        p++;
    }
    p -= LENGTH;
    i = 0;
    for(i; i < LENGTH; i++) {
        printf("Ponteiro: %d\tVetor: %d\n", *p, vetor[i]);
        p++;
    }
    p -= LENGTH;
    free(p);
    return 0;
}

/* Construa um programa com dois vetores, um de números pares de 2 a 20 e
outro de impares de 1 a 20. Some os elementos de mesmo índice e imprima o
resultado. */
#include <stdio.h>
#include <stdlib.h>
#define LENGTH 10
int main() {
    int vetor_par[LENGTH] = {};
    int vetor_impar[LENGTH] = {};
    int i = 0;
    int cont_par = 0, cont_impar = 0;
    int valor = 1;
    for(i; i <= 20; i++) {
        if(valor % 2 == 0 && cont_par < LENGTH) {
            vetor_par[cont_par] = valor;
            cont_par+=1;
        }
        valor += 1;
    }
    i = 0;
    valor = 1;
    for(i; i <= 20; i++) {
        if(valor % 2 != 0 && cont_impar < LENGTH) {
            vetor_impar[cont_impar] = valor;
            cont_impar+=1;
        }
        valor+=1;
    }
    i = 0;
    for(i; i < LENGTH; i++) {
        int soma = vetor_impar[i] + vetor_par[i];
        printf("Soma [%d] =  %d\n", i, soma);
    }
    return 0;
}

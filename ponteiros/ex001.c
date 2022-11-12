/* Crie um vetor de dez posições que recebam números impares com valor inicial
55 e os demais com decréscimo de 4. Para imprimir, use um ponteiro e use
aritmética de vetores para navegar pelos elementos do vetor */
#include <stdio.h>
#include <stdlib.h>
#define LENGTH 10
int main() {
    int vetor[LENGTH] = {};
    int* p = vetor;
    int i = 0;
    int valor = 55;
    for(i; i < LENGTH; i++) {
        vetor[i] = valor;
        valor -= 4;
    }
    i = 0;
    for(i; i < LENGTH; i++) {
        printf("%d\n", *p++);
    }
    p -= LENGTH;
    free(p);
    return 0;
}
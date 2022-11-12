/* Crie dois vetores, um por declaração de tipo simples e outro com ponteiro com
20 números quaisquer. Navegue pelos vetores imprimindo o maior elemento (do
vetor de ponteiro ou do vetor simples) de mesmo índice */
#include <stdio.h>
#include <stdlib.h>
#define LENGTH 20
int main() {
    int vetor[LENGTH] = {};
    int* ponteiro = (int *) malloc(LENGTH*sizeof(int));
    int i = 0, valor = 1;
    for(i; i < LENGTH; i++) {
        vetor[i] = valor;
        valor++;
    }
    i = LENGTH;
    valor = LENGTH;
    for(i; i >= 1; i--) {
        *ponteiro = valor;
        ponteiro++;
        valor--;
    }
    i = 0;
    ponteiro-=LENGTH;
    for(i; i < LENGTH; i++) {
        if(*ponteiro > vetor[i] || *ponteiro == vetor[i]) {
            printf("Maior valor do índice [%d] => %d\n", i, *ponteiro);
        } else if(*ponteiro < vetor[i]) {
            printf("Maior valor do índice [%d] => %d\n", i, vetor[i]);
        }
        ponteiro++;
    }
    ponteiro-=LENGTH;
    free(ponteiro);
    return 0;
}

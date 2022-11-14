#include <stdio.h>
#include "linear_queue.h"

int main() {
    Queue* queue = create_queue();
    int i = 0;
    printf("Inserção de Valores\n");
    for(i; i < LENGTH; i++) {
        inserting(queue, i);
        printf("Adicionado: %d\n", i);
    }
    int proximo;
    i = 0;
    printf("\nRemoção de Valores\n");
    for(i; i < LENGTH; i++) {
        next(queue, &proximo);
        printf("Próximo na fila: %d\n", proximo);
        int value;
        removing(queue, &value);
        printf("Removido: %d\n", value);
    }
    free_queue(queue);
    return 1;
}

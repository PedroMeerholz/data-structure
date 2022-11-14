#include <stdio.h>
#include "linear_stack.h"

int main() {
    Stack* stack = create_stack();
    int i = 0;
    for(i; i < LENGTH; i++) {
        int value = (i + 1) * 2;
        push(stack, value);
    }
    int value;
    i = 0;
    for(i; i < LENGTH; i++) {
        if(pop(stack, &value)) {
            printf("Desempilhando -> %d\n", value);
        } else {
            printf("Pilha vazia\n");
        }
    }
    free_stack(stack);
    return 1;
}
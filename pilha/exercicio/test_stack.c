/* Implemente uma aplicação que receba uma sequência de 10
números de ponto flutuante. Ao final deve ser apresentado o
resultado da divisão dos elementos em ordem inversa de sua
inserção na estrutura. */

#include <stdio.h>
#include "stack.h"

int main() {
    Stack* stack = create_stack();
    int i = 0, valores_inversos[LENGTH] = {};
    push(stack, 1);
    push(stack, 2);
    push(stack, 4);
    push(stack, 48);
    for(i; i < LENGTH; i++) {
        int value;
        pop(stack, &value);
        valores_inversos[i] = value;
    }
    i = 0;
    float resultado_divisao = 0;
    for(i; i < LENGTH; i++) {
        if(i == LENGTH-1) {
            continue;
        } else {
            if(i == 0) {
                resultado_divisao = valores_inversos[i] / valores_inversos[i+1];
            } else {
                resultado_divisao = resultado_divisao / valores_inversos[i+1];
            }
        }
        printf("%d / %d = %f\n", valores_inversos[i], valores_inversos[i+1], resultado_divisao);
    }
    return TRUE;
}
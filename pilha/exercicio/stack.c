#include <stdlib.h>
#include "stack.h"

struct Stack_ {
    int quantity;
    int element[LENGTH];
};
Stack* create_stack() {
    Stack* stack = (Stack*) malloc(sizeof(Stack));
    if(stack != NULL) {
        stack->quantity = 0;
    }
    return stack;
}
int push(Stack* stack, int value) {
    if(stack->quantity == LENGTH) {
        return FALSE;
    } else {
        stack->element[stack->quantity++] = value;
        return TRUE;
    }
}
int pop(Stack* stack, int* value) {
    if(stack->quantity == 0) {
        return FALSE;
    } else {
        *value = stack->element[stack->quantity-1];
        stack->quantity--;
        return TRUE;
    }
}
int top(Stack* stack, int* value) {
    if(stack->quantity == 0) {
        return FALSE;
    } else {
        *value = stack->element[stack->quantity];
        return TRUE;
    }
}
void free_stack(Stack* stack) {
    free(stack);
}
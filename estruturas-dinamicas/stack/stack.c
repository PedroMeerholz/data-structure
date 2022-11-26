#include "stack.h"
#include "../nodo/node.h"

struct Stack_ {
    Node* top;
};
Stack* create_stack() {
    Stack* stack = (Stack*) malloc(sizeof(Stack));
    if(stack != NULL) {
        stack->top = NULL;
    }
    return stack;
}
int push(Stack* stack, int value) {
    Node* new_node = create_node(value);
    if(new_node == NULL) {
        return 0;
    }
    set_next(new_node, stack->top);
    stack->top = new_node;
    return 1;
}
int pop(Stack* stack, int* value) {
    if(stack->top == NULL) {
        return 0;
    } else {
        *value = get_data(stack->top);
        Node* removed = stack->top;
        stack->top = get_next(removed);
        free(removed);
        return 1;
    }
}
int top(Stack* stack, int* value) {
    if(stack->top == NULL) {
        return 0;
    } else {
        *value = get_data(stack->top);
        return 1;
    }
}
void free_stack(Stack* stack) {
    Node* top = stack->top;
    Node* removed;
    while(top != NULL) {
        removed = top;
        top = get_next(removed);
        free(removed);
    }
    free(stack);
}

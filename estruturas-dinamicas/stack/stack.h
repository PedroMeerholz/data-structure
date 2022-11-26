typedef struct Stack_ Stack;

Stack* create_stack();
int pop(Stack* stack, int* value);
int push(Stack* stack, int value);
int top(Stack* stack, int* value);
void free_stack(Stack* stack);
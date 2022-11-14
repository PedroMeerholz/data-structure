#define LENGTH 4
#define TRUE 1
#define FALSE 0

typedef struct Stack_ Stack;

Stack* create_stack();
int push(Stack* stack, int value);
int pop(Stack* stack, int* value);
int top(Stack* stack, int* value);
void free_stack(Stack*);
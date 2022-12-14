#define LENGTH 10
#define TRUE 1
#define FALSE 0

typedef struct Queue_ Queue;

Queue* create_queue();
int inserting(Queue* queue, int element);
int removing(Queue* queue, int* element);
int next(Queue* queue, int* element);
void free_queue(Queue* queue);
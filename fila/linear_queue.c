#include <stdlib.h>
#include "linear_queue.h"

struct Queue_ {
    int quantity;
    int element[LENGTH];
};
Queue* create_queue() {
    Queue* queue = (Queue*) malloc(sizeof(Queue));
    if(queue != NULL) {
        queue->quantity = 0;
    }
    return queue;
}
int inserting(Queue* queue, int element) {
    if(queue->quantity == LENGTH) {
        return FALSE;
    } else {
        queue->element[queue->quantity++] = element;
        return TRUE;
    }
}
int removing(Queue* queue, int* element) {
    if(queue == 0) {
        return FALSE;
    } else {
        *element = queue->element[0];
        queue->quantity--;
        int i = 0;
        for(i; i < queue->quantity; i++) {
            queue->element[i] = queue->element[i+1];
        }
        return TRUE;
    }
}
int next(Queue* queue, int* element) {
    if(queue == 0) {
        return FALSE;
    } else {
        *element = queue->element[0];
        return TRUE;
    }
}
void free_queue(Queue* queue) {
    free(queue);
}
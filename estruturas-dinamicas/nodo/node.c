#include "node.h"
#include <stdlib.h>

struct Node_ {
    int value;
    Node* next_node;
};
Node* create_node(int value) {
    Node* node = (Node*) malloc(sizeof(Node));
    if(node != NULL) {
        node->value = value;
        node->next_node = NULL;
    }
    return node;
}
Node* get_next(Node* node) {
    return node->next_node;
}
void set_next(Node* node, Node* next_node) {
    node->next_node = next_node;
}
int get_data(Node* node) {
    return node->value;
}
